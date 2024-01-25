#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float lbyec2a, engcal1, fndmath, fndstat;
    float sum, GPA;

    printf("LBYEC2A Grade:");
    scanf("%f", &lbyec2a);

    printf("ENGCAL1 Grade:");
    scanf("%f", &engcal1);

    printf("FNDMATH Grade:");
    scanf("%f", &fndmath);

    printf("FNDSTAT Grade:");
    scanf("%f", &fndstat);

    GPA = (lbyec2a*1 + engcal1*3 + fndmath*5 + fndstat*3 ) / 12;

    printf("GPA = %.2f\n", GPA);
	return 0;
}