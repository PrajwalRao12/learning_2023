#include <stdio.h>

int count(int num) {
    int count = 0;
    
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        
        num >>= 1;
    }
    
    return count;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int setbits = 0;

    for (int i = 0; i < size; i++) {
        setbits += count(arr[i]);
    }

    printf("Total number of set bits in the array: %d\n", setbits);

    return 0;
}