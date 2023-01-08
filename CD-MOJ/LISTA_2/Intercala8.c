#include <stdio.h>
#include <stdlib.h>

// Função para mesclar duas arrays ordenadas
int* merge(int *a, int *b, int a_size, int b_size) {
  int i = 0, j = 0, k = 0;
  int *result = malloc((a_size + b_size) * sizeof(int)); // aloca array dinamicamente
  while (i < a_size && j < b_size) {
    if (a[i] < b[j]) {
      result[k++] = a[i++];
    } else {
      result[k++] = b[j++];
    }
  }
  while (i < a_size) {
    result[k++] = a[i++];
  }
  while (j < b_size) {
    result[k++] = b[j++];
  }
  return result;
}

int main() {
  int sizes[8];
  int array[8][100000]; // array para armazenar os dados
  int **array_final = malloc(4 * sizeof(int*)); 
  for (int i = 0; i < 8; i++) {
    int s;
    scanf("%d", &s);
    sizes[i] = s;
    for (int j = 0; j < s; j++) {
      scanf("%d", &array[i][j]);
    }
  }

  for (int i = 0, j=0; i < 8; i=i+2, j++) {
    array_final[j] = merge(array[i], array[i+1], sizes[i], sizes[i+1]);
    sizes[j] = sizes[i]+sizes[i+1];
  }

  for (int i = 0, j=0; i < 4; i=i+2, j++) {
    array_final[j] = merge(array_final[i], array_final[i+1], sizes[i], sizes[i+1]);
    sizes[j] = sizes[i]+sizes[i+1];
  }

  array_final[0] = merge(array_final[0], array_final[1], sizes[0], sizes[1]);

  for(int j=0; j<sizes[0]+sizes[1]; j++){
    printf("%d ", array_final[0][j]);
  }
  free(array_final); // libera a memória alocada dinamicamente
  return 0;
}