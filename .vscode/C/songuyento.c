#include<stdio.h>
#include<math.h>

int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if (n%i==0)
		{
			return 0;	
		}
		else return n>1;
	}

}
int main(){
	int n;
	scanf("%d",&n);
	if (prime(n))
	{
		printf("Yes\n");	

	}
	else printf("No\n");
	return 0;
}