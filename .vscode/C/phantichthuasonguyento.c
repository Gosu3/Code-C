#include<stdio.h>

int main(){
    int t;
    int i=2;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);


        while (n>1)
        {
            if (n%i==0)
            {
                printf("%d ",i);
                n/=i;
            }
            else i++;
        }
        return i;
        
    }
    

    return 0;
}