#include<stdio.h>
#include<stdlib.h>      // this library is needed for system("pause")
const double pi = 3.14159265359;
int main(){
    double r;
    printf("Enter the radius(in cms): ");
    scanf("%lf", &r);
// area of circle
    float area = pi*r*r;
    printf("Area of Circle is : %f cm.sq\n", area);

// circumference of circle
    double cir = pi*r*2;
    printf("Circumference of the circle is : %lf cm\n", cir);
    system("pause");    // this is only for windows as this makes the application not quit after executing successfully
    return 0;
}