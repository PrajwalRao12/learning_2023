#include <stdio.h>


  void print1_to_n(int n);
    void printspaces(int n);
    void printn_to_1(int n);
    

void print1_to_n(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");
}

void printspaces(int n)
{
    int i, j;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = 1; j <= (2 * (n - i) - 1); j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void printn_to_1(int n)
{
    int i;
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
    for (i = 2; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    print1_to_n(n);
    printspaces(n);
    printn_to_1(n);
    

    return 0;
}