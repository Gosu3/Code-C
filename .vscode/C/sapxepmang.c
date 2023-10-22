#include<stdio.h>
#define LENGTH 10

int *nhap(){
    static int a[LENGTH];
    int i;
    for ( i = 0; i < LENGTH; i++)
    {
        scanf("%d",&a[i]);
    }
    return a;

}

void hienthi(const int a[]){
    int i;
    for ( i = 0; i < LENGTH; i++)
    {
       printf("%2d",a[i]);
    }
    printf("\n");
}

void bubbleSort (int a[]){ //tang dan
    int i,j;
    for ( i = 0; i < LENGTH -1 ; i++)
    {
        for ( j = LENGTH - 1 ; j > i ; j--)
        {
           if (a[j] < a[j-1])
           {
            int temp = a[j];
            a[j]= a[j-1];
            a[j-1]=temp;
           }
           
        }
        
    }
    
}


int main(int argc, char const *argv[])
{
    int *a;
    a=nhap();
    printf("\nTruoc khi sap xep: ");
    hienthi(a);
    bubbleSort(a);
    printf("\nSau khi sap xep: ");
    hienthi(a);
    return 0;
}

