//difference between even & odd indexed elements
#include <stdio.h>

#define siize 8

int main() {
    int arr[size] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
   int sum_odd=0; 
   int sum_even=0;
    
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    int difference = sum_even - sum_odd;
    printf("The difference between even-indexed and odd-indexed elements of the array is  %d\n", difference);

    return 0;
}