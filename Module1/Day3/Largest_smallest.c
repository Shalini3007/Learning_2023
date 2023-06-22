#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        // Find smallest and largest digit in the current number
        while (num > 0) {
            int digit = num % 10;
            smallest = (digit < smallest) ? digit : smallest;
            largest = (digit > largest) ? digit : largest;
            num /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}