#include<stdio.h>

int maximum (N1 , N2){

    if (N1 > N2){
        return N1;
    }
    else {
        return N2;
    }
}
int main (){

     int N1, N2;
    printf("ENTRER LE PREMIER NOMBRE: ");
   scanf("%d", &N1);
   printf("ENTRER LE DEUXIEME NOMBRE: ");
   scanf("%d", &N2);

   int resultat = maximum (N1, N2);

   printf("La maximum du %d et %d est egale: %d", N1, N2, resultat);


   return 0;






}
