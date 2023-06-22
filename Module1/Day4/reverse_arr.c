#include <stdio.h>
#include <stdlib.h>

int main(){
   int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[10];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("Reversed array is :");
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}