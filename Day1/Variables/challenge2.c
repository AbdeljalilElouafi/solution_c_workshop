#include<stdio.h>

int main() {

int C;
float K;
const float CT = 273.15;

printf("Enter the current temperature: ");
scanf("%d", &C);
K = C + CT;

printf("Your current temperature in kelvin is %.2f: ", K);

return 0;




}
