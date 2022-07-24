#include <stdio.h>
int main()
{
    int i, j, n = 4;

    for (i = 1; i <= n; i++)
    {
         char k='A';
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= i && j <= 2 * n - i)
            {
                printf("%c ",k);
               if(j<=(2*n-1)/2)
               k++;
               else
               k--;
            }
            else
            {
                printf("  ");
            }
            
    }
    printf("\n");
        
    }
    return 0;
}