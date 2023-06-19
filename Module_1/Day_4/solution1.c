// 1. Sum and Average of 1D Array

#include <stdio.h>

int main()
{
    int size, average;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Array Elements\n");
    for(int i = 0; i< size; i++){
        scanf("%d", &*(arr+i));
    }
    
    int sum = 0;
    for(int i = 0; i< size; i++){
        sum += *(arr+i);
    }
    printf("The sum of Array is: %d\n", sum);
    
    average = sum/size;
    printf("The average of the Array is: %d", average);
    

    return 0;
}