#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    int m=n-1;
    for ( i = 1; i <= n+m; i++)
    {
         
        for (j = 1; j <= n+m ; j++)
        {
            if (j<=m)
            {
                printf("~");
            }
            else
                printf("*");
            
        }
        printf("\n");
        m--;
    }
    
}
