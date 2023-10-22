#include<stdio.h>
#include<string.h>
char a[20];
int main(int argc, char const *argv[])
{
    int t,n,i,j;
    int CheckSum;
    scanf("%d",&t);
    while(t--){ 
        scanf("%s",&a);
        for (i = 0; i < strlen(a); i++)
        {
            for ( j = i+1; j < strlen(a); j++)
            {
                if(a[i]>a[j]){
                    CheckSum =1 ;
                }
                else
                    CheckSum=0 ;
            }
            
        }
        if (CheckSum==1)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
        
        



    }
    return 0;
}
