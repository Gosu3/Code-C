#include<stdio.h>
#include <math.h>

int prime[1000001];

void sieve(){
	//coi tat ca la so ngto

	for (int i = 0; i <= 1000000 ; i++)
	{
		prime[i]=1;
		//loai 0 va 1
		prime[0]=prime[1]=0;
	}
	//duyet tu 2 den sqrt(n)
	//duyet tu  i*i
	for (int i = 2; i <= 1000; ++i)
	{
		if (prime[i])
			{
				//duyet tat ca boi so cua i va cho no khong con la so nguyen to
				for(int j=i*i;j<=1000000;j+=i){
					prime[j]=0;

				}
			}	
	}
}
int main(int argc, char const *argv[])
{
	sieve();
	int n;
	scanf("%d",&n);
	for (int i = 0; i <= n; ++i)
	{
		if (prime[i])
		{
			printf("%d ",i);
		}
	}
}