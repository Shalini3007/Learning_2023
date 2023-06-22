#include <stdio.h>

int sum_of_oddindex(int arr[], int n){
    int sum_odd = 0;
    for(int i =0; i<n; i++){
        if(i%2 !=0){
            sum_odd += arr[i];
        }
    }
    return sum_odd;
}
int sum_of_evenindex(int arr[], int n){
    int sum_even = 0;
    for(int i =0; i<n; i++){
        if(i%2 ==0){
            sum_even += arr[i];
        }
    }
    return sum_even;
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[10];

    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int evensum = sum_of_evenindex(arr, n);
    int oddsum = sum_of_oddindex(arr, n);

    printf("%d\n", evensum);
    printf("%d\n", oddsum);

    return 0;

}