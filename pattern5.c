
#include <stdio.h>

void pattern5(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2*n - i;
        }
        for (int j = 1; j <= star; j++)
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
    pattern5(n);

    puts("\n");
    return 0;
}