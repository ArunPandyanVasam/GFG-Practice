
#include <stdio.h>

void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //  space
        for (int j = 1; j <= n - i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == n)
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
    pattern13(n);

    puts("\n");
    return 0;
}