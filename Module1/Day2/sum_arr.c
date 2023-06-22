#include <stdio.h>
int sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i=i+2) {
        sum = sum+ arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sum(arr, size);
    printf("Sum of alternate element of an array is: %d\n", result);
    return 0;
}