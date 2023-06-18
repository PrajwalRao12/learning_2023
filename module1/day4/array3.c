#include <stdio.h>

#define size 6

int main() {
    int arr[size] = {11, 13, 15, 17, 19,21};
    int strt = 0; // Start index of the array
    int end = size - 1; // End index of the array
    
    
     printf(" The array ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array
    while (strt < end) {
        // Swap elements 
        int temp = arr[strt];
        arr[strt] = arr[end];
        arr[end] = temp;

        strt++;
        end--;
    }

   
    printf(" The reversed array ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}