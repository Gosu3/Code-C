#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,i,j;
    scanf("%d %d",&a, &b);
    int m=0;
    for ( i = 1; i <= a ; i++)
    {
        for ( j = 1; j <= b ; j++)
        {
            if (j<=m)
            {
                printf("~");
            }
            else
                printf("*");
            
        }
        printf("\n");
        m++;
    }
    
    return 0;
}
