
#include <stdio.h>

void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        //  space
        for (int j = 0; j < n-1-i; j++)
        {
            printf("-");
        }

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