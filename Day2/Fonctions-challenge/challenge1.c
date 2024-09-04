#include <stdio.h>

int somme(int a, int b) {

    return a + b;
}
int main() {

    int N1, N2;


   printf("ENTRER LE PREMIER NOMBRE: ");
   scanf("%d", &N1);
   printf("ENTRER LE DEUXIEME NOMBRE: ");
   scanf("%d", &N2);

   int resultat = somme (N1, N2);

   printf("La somme du %d et %d est egale: %d", N1, N2, resultat);


   return 0;




}
