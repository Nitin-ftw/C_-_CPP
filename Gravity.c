#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    double length, timePeriod, g;
    printf("Enter length of pendulum and time period:\n");
    scanf("%lf %lf", &length, &timePeriod);
    g = (4 * PI * PI * length) / (timePeriod * timePeriod);
    printf("Acceleration due to gravity = %.4lf\n", g);
    return 0;
}
