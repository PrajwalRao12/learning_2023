#include <stdio.h>
void Grade(int marks) 
{
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
    } else if (marks >= 60 && marks <= 74) {
        printf("Grade C\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade D\n");
    } else if (marks >= 0 && marks <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid entry\n");
    }
}
int main() 
{
    int n;
    printf("Enter the marks: ");
    scanf("%d", &n);
    Grade(n);
    return 0;
}
