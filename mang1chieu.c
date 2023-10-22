#include<stdio.h>
#define LENGTH 10

int *nhap(){
    static int arr[LENGTH];
    int i;
    for ( i = 0; i < LENGTH; i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;

}


void hienthi(const int arr[]){
    int i;
    for ( i = 0; i < LENGTH; i++)
    {
        printf("%2d",arr[i]);
    }
    printf("\n");
}


int main(int argc, char const *argv[])
{
   int *arr;
    arr= nhap();
    printf("\nTruoc khi: ");
    hienthi(arr);

    printf("\nSau khi: ");
    hienthi(arr);
    return 0;
}
