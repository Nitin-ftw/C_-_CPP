#include <stdio.h>
int main()
{
    double purchasePrice, salvageValue, years, depreciation;
    printf("Enter purchase price, salvage value and years of service:\n");
    scanf("%lf %lf %lf", &purchasePrice, &salvageValue, &years);
    depreciation = (purchasePrice - salvageValue) / years;
    printf("Yearly Depreciation = %lf\n", depreciation);
    return 0;
}
