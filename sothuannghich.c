#include<stdio.h>
#include<math.h>

int soThuanNghich(long long n){
	long long  res = 0,k=n;
	while(n!=0){
		res = res*10 + n%10;
		n/=10;
	}
	if(res==k)
		return 1;
	return 0;


}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(soThuanNghich(n))
			printf("Yes\n");
		else printf("No\n");

	}
}