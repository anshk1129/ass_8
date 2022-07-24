#include <stdio.h>
int main()
{
    int i, j, n = 4;

    for (i = 1; i <= n; i++)
    {
        int k = 1;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n + 1 - i || j >= n - 1 + i)
            {
                printf("%d ",k);
                if (j <= ((2 * n / 2) - 1)){
                    k++;
                }
                else
                    k--;

            }
        
            else
            {
                printf("  ");
                if(j==4)
                k--;
                
            
            }
           
        }
    
        printf("\n");
    }
    return 0;
}