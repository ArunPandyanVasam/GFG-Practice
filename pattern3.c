
#include <stdio.h>

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
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
    pattern3(n);
    
    puts("\n");
    return 0;
}