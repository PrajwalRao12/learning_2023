#include <stdio.h>
int maximum(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    return max;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int max = maximum(num1, num2);
    printf("The biggest number is: %d\n", max);
    return 0;
}
