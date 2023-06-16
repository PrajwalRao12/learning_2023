#include <stdio.h>
#include <string.h>

int largestnum(int a) {
    char str[5];
    sprintf(str, "%d", a);

    int largest_num = 0;

    for (int i = 0; i < 4; i++) {
        char temp[4];
        strncpy(temp, str, i);
        strncpy(temp + i, str + i + 1, 3 - i);
        temp[3] = '\0'; 

        int present_num = atoi(temp); 

        if (present_num > largest_num) {
            largest_num = present_num;
        }
    }

    return largest_num;
}

int main() {
    int a;

    printf("eneter a 4 digit number: ");
    scanf("%d", &a);

    int largest = largestnum(a);

    printf("The largest number after deleting a single digit is  %d\n", largest);

    return 0;
}