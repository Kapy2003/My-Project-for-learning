#include<stdio.h>
// #include<stdlib.h>    // this library is needed for system("pause")
int main( void ) {
    int a;
    printf("enter a(int):");
    scanf("%d", &a);

    float b;
    printf("enter b(float):");
    scanf("%f", &b);

    double c;
    printf("enter c(double):");
    scanf("%lf", &c);


    long d;
    printf("enter d(long double):");
    scanf("%ld", &d);


// print the size of a, b, c, d using sizeof() operator
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of long double: %zu bytes\n", sizeof(d));
    
//    system("pause"); // this is only for windows as this makes the application not quit after executing successfully
    return 0;
}
