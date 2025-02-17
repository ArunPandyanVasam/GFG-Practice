
#include <stdio.h>

void pattern13(int n)
{
    int spaces;
    int stars;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        //  space
        spaces = n - i;
        stars = i + i - 1;
        if (i > n)
        {
            spaces = i - n;
        }
        for (int j = 1; j <= spaces; j++)
        {
            printf("-");
        }

        //  star
        for (int j = 1; j <= stars; j++)
        {
            if (j == 1 || j == stars) {
                printf("*");
            } else {
                printf(" ");
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