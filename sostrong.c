#include<stdio.h>


    int giaithua(int n){
        int gt=1;
        for (int i = 1; i <= n; i++)     
        {
            gt=gt*i;
        }
        return gt;
        
    }
    int tonggiaithua(int n){
        int sum=0;
        int m;
        while (n>0)    
        {
            m=n%10;
            sum=sum+giaithua(m);
            n/=10;
           
        }
        return sum;


    }
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    if(n==tonggiaithua(n)){
        printf("1");
    }
    else
    printf("0");
    return 0;
}

  

