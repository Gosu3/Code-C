#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if (i==1||j==n|| j==1|| i==n) 
            {
                printf("*");
            }
            else
                printf(".");
            
        }
        printf("\n");
    }
    
    return 0;
}