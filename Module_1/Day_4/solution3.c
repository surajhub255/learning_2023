// 3. Reverse the Array

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
   
    printf("The Reverse of Array is: \n");
    for(int i = size-1; i>= 0; i--){
        printf("%d\n", *(arr+i));
    }
 
    return 0;
}