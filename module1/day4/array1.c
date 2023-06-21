
#include <stdio.h>

#define SIZE 5 

int main() {
    int arr[SIZE] = {2, 4, 6, 8, 10};
    int sum = 0;
    float average;
    int i;

    for (i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    average = (float) sum / SIZE;

    printf("The sum is : %d\n", sum);
    printf("The average is : %.2f\n", average);

    return 0;
}