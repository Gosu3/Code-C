#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,k;
    scanf("%d",&n);
    //8
    int demchan=0;
    int demle=0;
  while (n!=0)  
  {
     k=n%10;
     if (k%2==0)
    
         demchan++;  
        
     else
         demle++;
     
        n/=10;
  }
  
  printf("%d %d",demchan ,demle);
    
    return 0;
}
