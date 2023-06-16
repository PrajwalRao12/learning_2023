#include <stdio.h>

int compare_boxes(int arr1[], int arr2[], int size) {
    int count[size];
    int j;
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        int item = arr1[i];
        
        for (j = 0; j < size; j++) {
            if (arr2[j] == item && count[j] == 0) {
                count[j] = 1;
                break;
            }
        }
        if (j == size || count[j] == 1) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr1[] = {200, 10, -90};
    int arr2[] = {-90, 200, 10};
    int size = sizeof(arr1) / sizeof(arr2[0]);

    int final_result1 = compare_boxes(arr1, arr2, size);

    if (final_result1 == 1) {
        printf("The boxes arr1 and arr2 have a one-to-one mapping of items.\n");
    } else {
        printf("The boxes arr1 and arr2 do not have a one-to-one mapping of items.\n");
    }
  

    return 0;
}