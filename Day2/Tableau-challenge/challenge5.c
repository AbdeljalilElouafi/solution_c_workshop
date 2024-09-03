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

     for  (int i=0; i < E ; i++){


            printf("%d \n", tableau[i]);
}

     int min = tableau[0];

     for ( int i = 1; i < E ; i++){
        if (tableau[i] < min)
            min = tableau[i];

     }

     printf("la valeur du nombre minimum est %d", min);


return 0;





}
