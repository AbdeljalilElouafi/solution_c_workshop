#include<stdio.h>

int main () {

    int A , B;


    printf("Entrer le nombre A: ");
    scanf("%d", &A);
    printf("Entrer le nombre B: ");
    scanf("%d", &B);

    int somme = A + B;
    int tripple = somme*3;
    // Essaie de L'operateur ternere pour la deuxieme fois.

    printf(A == B ? printf("Le tripple du somme des deux valeurs = %d ", tripple) : printf("La somme des deux valeurs = %d", somme) );

return 0;





}
