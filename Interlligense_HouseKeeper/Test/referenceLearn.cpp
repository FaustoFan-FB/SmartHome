#include <stdio.h>

int main(){
    int a = 10;
    int &b = a;
    printf("a = %d\n" , a);
    printf("b = %d\n" , b);
    printf("&a = %p\n" , &a);
    printf("&b = %p\n" , &b);

    return 0;
}