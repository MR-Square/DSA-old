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
    printf("\n\n");

    // Pointer Arithmatic
    printf("p = %d\n",p);
    printf("p+1 = %d\n",p+1);
    // since p is pointing to integer that size is 4 bytes
}