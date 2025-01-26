
#include <stdio.h>

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
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
    pattern2(n);
    
    puts("\n");
    return 0;
}