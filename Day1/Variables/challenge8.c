#include<stdio.h>
#include<math.h>
int main(){

int a;
int b;
int c;
float Moyenne;

printf("enter the first number: ");
scanf("%d", &a);
printf("enter the second number: ");
scanf("%d", &b);
printf("enter the third number: ");
scanf("%d", &c);

Moyenne = pow (a*b*c, 0.33) ;
printf("La moyenne geometrique est %f", Moyenne);


return 0;





}
