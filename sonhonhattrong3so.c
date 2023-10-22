#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    int min;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        min=b;
    }
    else if (b>c)
    {
        min=c;
    }
    else if (c>a)
    {
        min=a;
    }
    printf("%d",min);

    
    

    return 0;
}
