#include <stdio.h>

// Function to swap an integer and a double using pointers and type casting
void swap(void* a, void* b) {
    int tempInt = *(int*)a;
    double tempDouble =*(double*)b;

    *(int*)a = (int)tempDouble;
    *(double*)b = (double)tempInt;
}

int main() {
    int a = 14;
    double b = 28.14;

    printf("Before swap: a = %d, b = %f\n", a, b);

    // Swap an integer and a double
    swap(&a, &b);

    printf("After swap: a = %d, b = %f\n", a, b);

    return 0;
}