#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    printf("%d",sizeof(arr));

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    printf("The sum of alternate elements of the given arry is : %d\n", sum);

    return 0;
}