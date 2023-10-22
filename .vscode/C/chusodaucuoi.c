#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,k,s;
    scanf("%d",&n);
    int m=n%10; //4
    while(n>=10){
        s=n%10;
        n/=10;
    }
    printf("%d %d",n,m);
    return 0;
}
