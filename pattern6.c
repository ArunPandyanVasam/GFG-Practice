
#include <stdio.h>

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //  space
        for (int j = 1; j <= n - i; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
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
    pattern6(n);

    puts("\n");
    return 0;
}