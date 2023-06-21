
#include <stdio.h>

#define SIZE 7 

int main() {
    int arr[SIZE] = {23,3,5,2,8,6,9};
    int min = arr[0]; // Assume the first element is the minimum
    int max = arr[0]; // Assume the first element is the maximum
    int i;

    // Find the minimum and maximum
    for (i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The minimum number is : %d\n", min);
    printf("The maximum number is : %d\n", max);

    return 0;
}