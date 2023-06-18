//difference between even & odd elements
#include <stdio.h>

#define size 7

int main() {
    int arr[size] = {1, 2, 3, 4, 5, 12,7};
    int sum_even = 0; 
    int sum_odd = 0;  

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }
    int difference = sum_even - sum_odd;
    printf("The difference between even and odd elements of the array is : %d\n", difference);

    return 0;
}