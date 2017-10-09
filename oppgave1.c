#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"


void informasjon(void);
float beregn_bmi(float, float);

int main()
{
	float hoyde;
	float kg;
	float bmi;

	informasjon();
	printf("Vennligst skriv inn din høyde i meter: ");
	scanf("%f\n", &hoyde);
	printf("Vennligst skriv inn din vekt i kg: ");
	scanf("%f\n", &kg);
	bmi = beregn_bmi(kg, hoyde);

	printf("Din BMI er: %f.2\n", bmi);

	system("PAUSE");
	return 0;

}

void informajson(void)
{
	printf("Dette programmet skal beregne din BMI, basert på din høyde i meter og vekt i kg.\n\n");
}

float beregn_bmi(float vekt, float hoyde)
{
	float bmi;
	bmi = (vekt / (hoyde*hoyde));
	return bmi;
}
