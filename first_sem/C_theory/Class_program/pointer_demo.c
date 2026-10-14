#include <stdio.h>
int main(){
    int x=10;   //variable x which stores 10
    int*p;      //pointer which points the address of x
    p=&x;       //&-address operator

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);

}