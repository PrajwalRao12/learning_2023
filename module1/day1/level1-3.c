#include <stdio.h>
int main() 
{
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    // Read input from the user
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);
    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);
    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;    
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}