#include <stdio.h>
#include <stdlib.h>

int main() {
    float usd, cny, eud, gbp;
    float usdtocnyrate = 6.94;
    float eudtousdrate = 1.10;
    float usdtogbprate = 0.76;

    printf("Input US Dollar: ");
    scanf("%f", &usd);  

    cny = usd * usdtocnyrate;
    eud = usd / eudtousdrate;
    gbp = usd * usdtogbprate;

    printf("Chinese Yuan: %.2f\n", cny);
    printf("Euro Dollar: %.2f\n", eud);
    printf("British Pound: %.2f\n", gbp);

    return 0;
}