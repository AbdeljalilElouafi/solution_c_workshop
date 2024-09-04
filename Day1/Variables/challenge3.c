#include<stdio.h>

int main() {
int KM;
float Y;
const float YC = 1093.61 ;

printf("Enter the distance in kilometers: ");
scanf("%d",&KM);

Y = KM * YC;

printf("The distance in yards is: %.3f ", Y);

return 0;




}
