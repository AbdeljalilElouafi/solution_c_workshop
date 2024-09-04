#include<stdio.h>

int main() {
int KMh;
float ms;
const float P = 0.27778 ;

printf("Enter the speed in Km\h: ");
scanf("%d",&KMh);

ms = KMh * P;

printf("The speed in m\s is: %f ", ms);

return 0;


}
