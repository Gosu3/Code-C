#include <stdio.h>
#include <math.h>

int sodep(int n){
	for(int i=2; i<=sqrt(n); i++){
		int cnt =0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt>=2)
			return 1;
	}
	return 0;
}
int sodep2(int n){
	int ok=0;
	int cnt=0;
	for(int i=2; i<=sqrt(n);i++){
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt==1)
			return 0;
		if(cnt>=2)
			ok=1;
	}
	if(n!=1)
		return 0;
	return ok;

}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	for(int i=a;i<=b; i++){
		if(sodep2(i))
			printf("%d ", i);
	}
}