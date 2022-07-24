#include <stdio.h>
int main()
{
    int i, j, n = 25, k = 2, v = n - 1;
    for (i = 1; i <= n / 2 + 1; i++)

    {

        for (j = 1; j <= n; j++)
        {
            if (j >= (n / 2) + 2 - i && j <= n / 2 + i && i <= n / 2 + 1)
            {
                printf("* ");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = n / 2 + 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= k && j <= v)
            printf("* ");
            else 
            printf("  ");
        }
    
    printf("\n");
    k++;
    v--;
    }
    return 0;
}