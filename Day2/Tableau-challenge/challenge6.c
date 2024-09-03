#include<stdio.h>

int main(){

int E;


     printf("ENTRER LES ELEMENTS DU TABLEAU : ");
     scanf("%d", &E);

     int tableau[E];

     for (int i=0; i < E ; i++){


     printf("ENTRER  ELEMENT %d : ", i+1);
     scanf("%d", &tableau[i]);

     }


     int   facteur;
     printf("ENTRER LE FACTEUR DU MULTIPLICATION: ");
     scanf("%d", &facteur);


     for (int i=0; i < E ; i++){

     tableau[i] *= facteur;

     }
     for  (int i=0; i < E ; i++){


            printf("%d \n", tableau[i]);
}


return 0;
}
