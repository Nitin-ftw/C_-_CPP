#include <stdio.h>
#include <math.h>
int main()
{
    double demandRate, setupCost, holdingCost;
    double EOQ, TBO;
    printf("Enter demand rate, setup cost and holding cost per item per unit time:\n");
    scanf("%lf %lf %lf", &demandRate, &setupCost, &holdingCost);
    EOQ = sqrt((2 * demandRate * setupCost) / holdingCost);
    TBO = sqrt((2 * setupCost) / (demandRate * holdingCost));
    printf("EOQ = %.2lf\n", EOQ);
    printf("TBO = %.2lf\n", TBO);
    return 0;
}
