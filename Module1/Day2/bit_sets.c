#include <stdio.h>
int No_of_setBits(int num) {
    int count = 0;
    while (num) {
        count = count+(num & 1);
        num >>= 1;
    }
    return count;
}

int No_of_setBits_arr(int arr[], int size) {
    int tot_bits = 0;
    for (int i = 0; i < size; i++) {
        tot_bits = tot_bits+No_of_setBits(arr[i]);
    }
    return tot_bits;
}
int main() {
    int arr[] = {1,5, 9,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = No_of_setBits_arr(arr, size);
    printf("Total number of set bits of the elements of given array is : %d\n", result);
    return 0;
}