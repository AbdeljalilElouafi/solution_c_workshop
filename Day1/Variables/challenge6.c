#include<stdio.h>
int main() {

float a;
float b;

printf("enter a:");
scanf("%f", &a);
printf("enter b:");
scanf("%f", &b);

printf("%f + %f = %.2f \n",a ,b ,a+b);
printf("%f - %f = %.2f \n",a ,b ,a-b);
printf("%f * %f = %.2f \n",a ,b ,a*b);
printf("%f / %f = %.2f \n",a ,b ,a/b);

return 0;


}
