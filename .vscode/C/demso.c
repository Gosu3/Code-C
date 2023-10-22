#include<stdio.h>
int main(int argc, char const *argv[])
{
  int n;
  int a=0;
  scanf("%d",&n);
  while (n>0)
  {
      n/=10;
      a+=1;
  }
  printf("%d",a);
    return 0;   
}
