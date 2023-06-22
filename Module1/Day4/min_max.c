#include <stdio.h>
#include <limits.h>
void find_min_max(int arr[], int n)
{
    int i;
    int min = INT_MAX, max = INT_MIN;
 
    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The minimum element in the given array is : %d\n", min);
    printf("The maximum element in the given array is : %d", max);
 
    return;
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[10];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    find_min_max(arr, n);
 
    return 0;
}