#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    int m=n-1;
    for ( i = 1; i <=n+m; i++)
    {
        for ( j = 1; j <= n+m; j++)
        {
            if (j<=m)
            {
               printf("~");
            }
            else
            {
                if (i==1||j==n+m||i==n+m||j==m+1)
                {
                    printf("*");
                }
                else
                    printf(".");
            }
            
          
            
            // else if (i==m+1||j==m+1||i==1||j==n+m||i==n+m)
            // {
            //     printf("*");
            // }
            // else
            //     printf(".");
            
        }

        printf("\n");
          m--;
    }
    
}
