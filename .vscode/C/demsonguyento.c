#include <stdio.h>
#include <math.h>
int prime(int n){

	for (int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			return 0;
		}

			
	}
	return n>1;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i <=n ; i++)
		{
			if(prime(i))
				printf("%d ", i);
		}	
}