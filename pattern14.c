
#include <stdio.h>

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        //  space
        for (int j = 0; j < i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 1; j <= 2 * n - (i + i + 1); j++)
        {
            if (j == 1 || j == 2 * n - (i + i + 1) || i == 0)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
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
    pattern14(n);

    puts("\n");
    return 0;
}