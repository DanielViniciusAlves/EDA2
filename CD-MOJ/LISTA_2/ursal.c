#include <stdio.h>
#include <stdlib.h>

typedef struct election{
  int candidate;
  int quantity;
} election;

void swap_votes(election *a, election *b){
  election aux = *a;
  *a = *b;
  *b = aux;
}

int compare_votes(election a, election b){
  if (a.quantity > b.quantity){
    return 1;
  }
  else if (a.quantity == b.quantity){
    if (a.candidate > b.candidate){
      return 1;
    }
    else{
      return 0;
    }
  }
  return 0;
}

int partition(election *v, int left, int right){
  // Initialize variables for partitioning
  int i = left - 1, j = right;
  election pivot = v[right];
  while (1){
    // Find an element on the left that should be on the right
    while (compare_votes(v[++i], pivot));
    // Find an element on the right that should be on the left
    while (compare_votes(pivot, v[--j]))
      // If we've reached the left side of the array, we're done partitioning
      if (j == left)
        break;
    // If the pointers have crossed, we're done partitioning
    if (i >= j)
      break;
    // Swap the elements that are in the wrong partition
    swap_votes(&v[i], &v[j]);
  }
  // Swap the pivot element into its final position
  swap_votes(&v[i], &v[right]);
  // Return the index of the pivot element
  return i;
}

void quicksort(election *v, int left, int right){
  // If there is only one element in the array, we don't need to sort it
  if (right <= left) return;

  // If there are more than one element in the array, we need to sort it
  if (left < right){
    int j;
    
    // Find the middle element of the array
    int mid = (left + right) / 2;
    
    // Swap the middle element with the right element if necessary
    if (compare_votes(v[right], v[mid])){
      swap_votes(&v[right], &v[mid]);
    }
    // Swap the middle element with the left element if necessary
    if (compare_votes(v[mid], v[left])){
      swap_votes(&v[mid], &v[left]);
    }
    // Swap the middle element with the right element if necessary
    if (compare_votes(v[mid], v[left])){
      swap_votes(&v[mid], &v[right]);
    }
    
    // Partition the array around the pivot element
    j = partition(v, left, right);
    
    // Recursively sort the left and right partitions
    quicksort(v, left, j - 1);
    quicksort(v, j + 1, right);
  }
}

int main(){
  // Declare variables
  int num_senators, num_federal_deputies, num_state_deputies;
  int invalid_votes = 0, valid_votes = 0, presidential_votes = 0, n;
  // Allocate memory for votes
  election *votes = calloc(100000, sizeof(election));
  // Read input
  scanf("%d %d %d", &num_senators, &num_federal_deputies, &num_state_deputies);
  // Process votes for candidates
  while (scanf("%d", &n) != EOF){
    if (n < 0){
      invalid_votes++;
    }
    else{
      votes[n].candidate = n;
      votes[n].quantity++;
      if (n < 100){
        presidential_votes++;
      }
      valid_votes++;
    }
  }
  // Print total valid and invalid votes
  printf("%d %d\n", valid_votes, invalid_votes);
  // Sort votes using quicksort
  quicksort(votes, 10, 99);
  quicksort(votes, 100, 999);
  quicksort(votes, 1000, 9999);
  quicksort(votes, 10000, 99999);
  
  // Print results
  // Calculate percentage of votes received by presidential candidate
  float percentage = (votes[10].quantity * 1.0) / (presidential_votes * 1.0);
  // Print code of elected president or "Segundo Turno"
  if (percentage > 0.5){
    printf("%d\n", votes[10].candidate);
  }
  else{
    printf("Segundo turno\n");
  }
  // Print list of elected candidates for senators, federal deputies, and state deputies
  // Sorted by number of votes, with ties broken by candidate number
  printf("%d", votes[100].candidate);
  for (int i = 101; i < 100 + num_senators; i++){
    printf(" %d", votes[i].candidate);
  }
  printf("\n");
  printf("%d", votes[1000].candidate);
  for (int i = 1001; i < 1000 + num_federal_deputies; i++){
    printf(" %d", votes[i].candidate);
  }
  printf("\n");
  printf("%d", votes[10000].candidate);
  for (int i = 10001; i < 10000 + num_state_deputies; i++){
    printf(" %d", votes[i].candidate);
  }
  printf("\n");
}
