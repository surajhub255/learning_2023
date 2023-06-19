#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
  
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
      
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int size, average;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array Elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &*(arr+i));
    }
    int min, max;
  
    findMinMax(arr, size, &min, &max);
  
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
  
    return 0;
}

