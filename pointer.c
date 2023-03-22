#include<stdio.h>
void main(){
    printf("Pointer:\n");
    printf("\tIt is a variable that stores address of another variable.\n");

    int a;
    int *p;

    p = &a;
    a = 5;

    printf("a = %d\n",a);
    printf("p = %d\n",p);
    printf("&a = %d\n",&a);
    printf("&p = %d\n",&p);
    printf("*p = %d\n",*p);
}