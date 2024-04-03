#include <stdio.h>

void increase(int *start, int *stop) {
  int *current;

  current = start;

  while (current != stop) {
    ++(*current); // Increasing the value at the memory location pointed to by current
    ++current;     // Moving current to the next element in the array
  }
}

void print_array(const int *start, const int *stop) {
  const int *current;

  current = start;

  while (current != stop) {
    printf("%d\n", *current);
    ++current;
  }
}

int main() {
  int numbers[3] = {15, 32, 6};

  print_array(numbers, numbers + 3); // Print initial values

  printf("Numbers were increased.\n");

  increase(numbers, numbers + 3);  // Increase elements

  print_array(numbers, numbers + 3); // Print modified values

  return 0;
}

