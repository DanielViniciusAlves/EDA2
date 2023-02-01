#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 101 // maximum size of the hash table

char *hash_table[MAX_SIZE]; // array that stores the elements in the hash table

// function that calculates the hash value of a given key
int hash_function(char *key, int len){
  int result = 0;
  for (int i = 0; i < len; ++i){
    result += (key[i] * (i + 1)) % MAX_SIZE; // corre pro próximo 
  }
  return (19 * result) % MAX_SIZE;
}

int main(){
  int test_cases;
  scanf("%d", &test_cases);

  int num_operations;
  char input_string[30], command; // command can be 'A' for add or 'D' for delete
  char *key;
  int pos, is_unique, key_length, element_count;
  while (test_cases--){
    element_count = 0;
    for (int i = 0; i < num_operations; ++i)
      hash_table[i] = NULL;

    scanf("%d", &num_operations);
    for (int i = 0; i < num_operations; ++i){
      scanf("%s", input_string);
            key = &input_string[4];
            command = input_string[0];
            key_length = strlen(key);
              if (command == 'A'){
    is_unique = 1;
    for (int j = 0; j < 20; ++j){
      pos = (hash_function(key, key_length) + j * j + 23 * j) % MAX_SIZE;
      if (hash_table[pos] != NULL && strcmp(key, hash_table[pos]) == 0){
        is_unique = 0;
        break;
      }
    }

    if (is_unique){
      for (int j = 0; j < 20; ++j){
        pos = (hash_function(key, key_length) + j * j + 23 * j) % MAX_SIZE;

        if (hash_table[pos] == NULL){
          hash_table[pos] = malloc(sizeof(char) * (key_length + 1));
          strcpy(hash_table[pos], key);
          element_count++;
          break;
        }
      }
    }
  }
  else if (command == 'D'){
    for (int j = 0; j < 20; ++j){
      pos = (hash_function(key, key_length) + j * j + 23 * j) % MAX_SIZE;
      if (hash_table[pos] != NULL && strcmp(hash_table[pos], key) == 0){
        free(hash_table[pos]);
        hash_table[pos] = NULL;
        element_count--;
        break;
      }
    }
  }
}
printf("%d\n", element_count);
for (int i = 0; i
< MAX_SIZE; ++i){
if (hash_table[i] != NULL){
printf("%d:%s\n", i, hash_table[i]);
}
}
}
return 0;
}

