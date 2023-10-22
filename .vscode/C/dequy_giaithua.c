#include<stdio.h>
unsigned long long GiaiThua(int n){
    if (n==0||n==1) 
    {
       return 1;
    }
    else
    return n*GiaiThua(n-1);



}
int main(int argc, char const *argv[])
{
    int i;
    for (int i = 0; i < 21 ; i++)
    {(
       printf("%d!= %lld\n",i,GiaiThua(i)));
    }
    
}
