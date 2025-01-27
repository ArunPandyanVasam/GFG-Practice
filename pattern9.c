
#include <stdio.h>

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        //  space
        for (int j = 0; j < i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 0; j < 2*n-(i+i+1); j++)
        {
            printf("*");
        }

        //  space
        for (int j = 0; j < i; j++)
        {
            printf("-");
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
    pattern9(n);

    puts("\n");
    return 0;
}