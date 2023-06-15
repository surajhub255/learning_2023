/*2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting*/

#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;

    for (size_t i = 0; i < size; i++) {
        char temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    float f1 = 3.14;
    float f2 = 2.718;

    printf("Before swapping: f1 = %f, f2 = %f\n", f1, f2);

    swap(&f1, &f2, sizeof(float));

    printf("After swapping: f1 = %f, f2 = %f\n", f1, f2);

    return 0;
}
