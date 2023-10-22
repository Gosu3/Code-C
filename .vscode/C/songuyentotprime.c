#include <stdio.h>
#include<math.h>

int fine(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return i;

	}
	return n;
}
int fine2(int n){
	if(n==1)
		return 1;
	if (n%2==0)
	{
		return 2;
	}
	for(int i=3; i<=sqrt(n);i++){
		if(n%i==0)
			return i;
	}
	return n;
}
int prime[100001];
void sieve(){
	for(int i=1; i<=100000;i++){
		prime[i]=i;
	}
	for (int i = 2; i <= sqrt(100000); i++)
	{
		if (prime[i]==i)
		for(int j=i*i;j<=100000;j+=i)
			if(prime[j]=j){
				prime[j]=i;
			}
			
	}
}


int main(){
	int t;
	scanf("%d",&t);
	sieve();
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i= 1; i<=n ;i++)
		printf("%d %d %d\n",fine(i),fine2(i),prime[i]);
	}
}