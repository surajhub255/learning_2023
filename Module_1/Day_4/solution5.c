// 5. Difference of odd Indexed and even Indexed of number in Array

#include <stdio.h>
#include <stdlib.h>

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
   
    int Osum = 0, Esum = 0;
    for(int i = 0; i< size; i++){
        if(i % 2 == 0){
            Esum += *(arr+i);
        }
        else{
            Osum += *(arr+i);
        }
    }
    int diff;
    diff = abs(Esum-Osum);
    printf("The Difference of odd Indexed and even Indexed of number in Array is: %d\n", diff);
 
    return 0;
}