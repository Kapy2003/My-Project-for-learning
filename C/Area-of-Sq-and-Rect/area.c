#include <stdio.h>
int main ( void )
{
    float s, l, b, sq, rect;

    // input and calculating sq.area
    printf("Enter the Side of SQUARE : ");
    scanf("%f",&s);
    

    // input and calculating rect.area
    printf("Enter the Length : ");
    scanf("%f",&l);
    printf("Enter the Breadth : ");
    scanf("%f",&b);

    // logic for the code

    sq = s*s;
    rect = l*b;

    // output 
    printf("Area of SQUARE : %g\n",sq);
    printf("Area of RECTANGLE :%g\n:",rect);
    return 0;
}
