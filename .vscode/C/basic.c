#include<stdio.h>
#include<math.h>

int soNguyenTo(int n){
    int cnt=0,i;
    for( i=0;i <=n ; i++){
        if(n%i==0)
            ++cnt;
    }
    if(cnt == 2)
        return 1;
    else return 0;


}
int main(){

    int n;
    scanf ("Nhap so N: %d",&n);
    if(soNguyenTo(n))
        printf("YES");

    else
        printf("NO");
    return 0;


}