#include<stdio.h>
#include<math.h>

int main(){
    int m,n;

    int sum=0;
    scanf("%d %d",&m ,&n);
    if (m<n)
    {
        int start = sqrt(m);
        int end = sqrt(n);
        int i;
        start*start==m ? start:start+1;
        printf("%d\n",end-start+1);
        for (i =start; i <= end; i++)
        {
            printf("%d\n",i*i);
    
        }
  

    }
    



    return 0;
}