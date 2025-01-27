
#include <stdio.h>

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        //  space
        for (int j = 0; j < i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }

        puts(" ");
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //  space
        for (int j = 0; j < n - i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        puts(" ");
    }
}

int main()
{
    puts("\n");

    int n;
    printf("Input: ");
    scanf("%d", &n);
    pattern11(n);
    pattern10(n);

    puts("\n");
    return 0;
}