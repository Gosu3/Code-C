#include <stdio.h>
int main()
{
    int a=255,b=120;
    int *ptr = &a;
    printf("\nGia tri cua a: %d",*ptr);
    ptr = &b;
    printf("\nGia tri cua b: %d",*ptr);

    return 0;
}

