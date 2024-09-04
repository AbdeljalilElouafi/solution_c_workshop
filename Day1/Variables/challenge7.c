#include<stdio.h>
int main(){

int A;
int B;
int C;
float Moyenne;

printf("enter the first number: ");
scanf("%d", &A);
printf("enter the second number: ");
scanf("%d", &B);
printf("enter the third number: ");
scanf("%d", &C);

Moyenne =((A*2) + (B*3) + (C*5)) / 10;
printf("La moyenne est %f", Moyenne);

return 0;






}
