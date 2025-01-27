
#include <stdio.h>

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        //  space
        for (int j = 0; j < n - i - 1 ; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 0; j < (i+i) + 1; j++)
        {
            printf("*");
        }

        //  space
        for (int j = 0; j < n - i - 1 ; j++)
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
    pattern8(n);

    puts("\n");
    return 0;
}