#include <stdio.h>

int multiplication(int a, int b) {

    return a * b;
}
int main() {

    int N1, N2;


   printf("ENTRER LE PREMIER NOMBRE: ");
   scanf("%d", &N1);
   printf("ENTRER LE DEUXIEME NOMBRE: ");
   scanf("%d", &N2);

   int resultat = multiplication (N1, N2);

   printf("La Multiplication du %d et %d est egale: %d", N1, N2, resultat);


   return 0;




}
