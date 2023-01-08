A hash map (also called a hash table) is a data structure that maps keys to values. It works by using a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

The basic idea behind a hash map is to use the hash function to quickly locate the bucket or slot where a given key's value is stored. This allows for fast insertion, deletion, and retrieval of the values associated with the keys.

One of the main advantages of hash maps is their efficient performance in terms of time complexity. On average, the time required to perform basic operations such as insertion, deletion, and retrieval is constant, regardless of the size of the data set.

Here is an example of how a hash map could be implemented in C:

```
#define MAP_SIZE 100

typedef struct {
  int key;
  int value;
} map_entry;

map_entry map[MAP_SIZE];

int hash(int key){
  return key % MAP_SIZE;
}

void insert(int key, int value){
  int index = hash(key);
  while (map[index].key != 0){
    index = (index + 1) % MAP_SIZE;
  }
  map[index].key = key;
  map[index].value = value;
}

int search(int key){
  int index = hash(key);
  while (map[index].key != key){
    index = (index + 1) % MAP_SIZE;
  }
  return map[index].value;
}

```

Keep in mind that this is a very basic implementation of a hash map, and there are many variations and optimizations that can be made.