#include <stdio.h>
int main()
{
    float a,b,x;
    int A;
    printf("Which Calculation do you want to perform right now,\n1.Addition(+)\n2.Subtraction(-)\n3.Divition(÷)\n4.Multiplication(×)\nEnter the number to perform which calulation(if it is addition press 1)");
    scanf("%d",&A);
    if(A==1)
    {
        printf("okey you want to add something\nEnter the 2 numbers you want to add: ");
        scanf("%f %f",&a,&b);
        x = a + b;
        printf("Here is the answer\n %f + %f = %f",a,b,x);
    }
    else if(A==2)
    {
        printf("okey you want the difference something\nEnter the 2 numbers you want to see the difference: ");
        scanf("%f %f",&a,&b);
        x = a - b;
        printf("Here is the answer\n %f - %f = %f",a,b,x);
    }
    else if(A==3)
    {
        printf("okey you want to divide something\nEnter the 2 numbers you want to divide: ");
        scanf("%f %f",&a,&b);
        x = a / b;
        printf("Here is the answer\n %f ÷ %f = %f",a,b,x);
    }
    else if(A==4)
    {
        printf("okey you want to multiply something\nEnter the 2 numbers you want to multiply: ");
        scanf("%f %f",&a,&b);
        x = a * b;
        printf("Here is the answer\n %f × %f = %f",a,b,x);
    }
    else
    {
        printf("Invalid operation :(");
    }
    return 0;
}
