#include <iostream>

// Time complexity worst case O(n²), best case O(n)

// Space Complexity is a constante O(1) no need extra additional space only for variables like i and j, but they both are constant

void insertionSort (int a[], int n) {
  for (int i = 1; i < n; ++i) {
    int key = a[i];
    int j = i-1;

    while (j > -1 && a[j] > key) {
      a[j+1] = a[j];
      j = j - 1;
    }

    a[j+1] = key;
  }
}

int main() { 
  int a[] = {1, 2, 1, 2, 1, 2};
  std::cout << "ordered list by insertion sort: " << std::endl;
  int n = sizeof(a) / sizeof(a[0]);

  insertionSort(a, n);

  for (int i = 0; i < 6; i++) {
    std::cout << a[i] << " ";
  }

  std::cout << std::endl;
}
