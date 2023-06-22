#include<stdio.h>
int avg_no(int arr[], int n){
    int sum = 0;
    
    for(int i =0; i<n; i++){
        sum = sum+arr[i];
    }
    int average = sum/n;
    return average;

}
int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[10];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int Average = avg_no(arr, n);
    printf("Average of the array is: %d", Average);

    return 0;
}