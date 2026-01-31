#include <stdio.h>
int main()
{
    double purchasePrice, depreciation, yearsOfService, salvageValue;
    printf("Enter purchase price, annual depreciation and years of service:\n");
    scanf("%lf %lf %lf", &purchasePrice, &depreciation, &yearsOfService);
    salvageValue = purchasePrice - (depreciation * yearsOfService);
    printf("Salvage Value = %.2lf\n", salvageValue);
    return 0;
}
