#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,m;
    int s=1;
    scanf("%d",&n);
    while (n>=9)
    {
        m=n%10; //4
        s=s*m; //1*4
        n/=10; 
    }
    printf("%d",s);

    return 0;
}
