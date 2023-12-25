#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i)
        if (arr[i] == key)
            return i; 
    return -1; 
}

int main() {
    int arr[100], size, key;


      printf("Enter the size of the array: ");
            scanf("%d", &size);
    
  printf("Enter %d elements: ", size);
        for (int i = 0; i < size; ++i)
            scanf("%d", &arr[i]);

  
      printf("Enter the key to search: ");
      scanf("%d", &key);


 int index = linearSearch(arr, size, key);
      if (index != -1)
      printf("Key %d found at index %d.\n", key, index);
     else
        printf("Key %d not found in the array.\n", key);

    return 0;
}
