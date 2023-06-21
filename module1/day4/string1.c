#include <stdio.h>

void toggle_case(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggle_case(str);

    printf("Toggled case string: %s", str);

    return 0;
}