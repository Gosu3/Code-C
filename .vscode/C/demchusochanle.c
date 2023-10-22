#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,n,k;
    scanf("%d",&t);

    
    while (t--)
    {
        int demchan=0;
        int demle=0;
        scanf("%d",&n);
        while (n!=0)
        {
            k=n%10;
            if (k%2==0)
            {
                demchan++;   
            }
            else{
                demle++;
            }
            n/=10;
        }
        printf("%d %d",demle, demchan);

    }
}
