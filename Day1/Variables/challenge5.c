#include<stdio.h>
int main(){

int C;

printf("Enter the temperature in celsius: ");
scanf("%d", &C);

if (C < 0 ){
    printf("The state of water at this temperature is Solid");

   }
    else if (C >= 0 && C < 100){
    printf("The state of water at this temperature is liquid");
    }
    else {
    printf("The state of water at this temperature is Gaz");

    }

return 0;







}
