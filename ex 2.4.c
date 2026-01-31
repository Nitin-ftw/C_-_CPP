#include <stdio.h>
void main()
{
    float a, b, c, x ;
    printf("what is A : ");
    scanf("%f",&a);
    printf("what is B : ");
    scanf("%f",&b);
    printf("what is C : ");
    scanf("%f",&c);
    x = a/(b - c);
    printf("value of x is : x = a/(b - c) ==> %f/(%f - %f) ==> %f",a,b,c,x);
}
