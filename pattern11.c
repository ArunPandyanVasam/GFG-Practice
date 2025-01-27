
#include <stdio.h>

void pattern10(int n)
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

int main()
{
    puts("\n");

    int n;
    printf("Input: ");
    scanf("%d", &n);
    pattern10(n);

    puts("\n");
    return 0;
}