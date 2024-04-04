#include <stdio.h>

void insertion_sort_i(int* a, int length) {
  int i;
  for (i = 0; i < length; ++i) {
    int key = a[i];
    /* insert key(a[i]) into ordered sequence a[1:i-1] */
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
}

void insertion_sort_f(float* a, int length) {
  int i;
  for (i = 0; i < length; ++i) {
    float key = a[i];
    /* insert key(a[i]) into ordered sequence a[1:i-1] */
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
}

int main() {
  int i_array[] = {10, 5, 6, 14, 23, 1, 0, 89};
  insertion_sort_i(i_array, 7);

  unsigned int byte_dimension_i = sizeof(i_array);
  /* dimensione in byte / dimensione in byte del singolo elemento */
  unsigned int dimension_i = sizeof(i_array) / sizeof(i_array[0]);

  printf("dimension of array in byte %lu \n", byte_dimension_i);
  printf("dimension of array %lu \n", dimension_i);

  /* print all elements of array */
  unsigned int i;
  for (i = 0; i < dimension_i; ++i) {
    printf("%d, ", i_array[i]);
  }

  return 0;
}