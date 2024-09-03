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

     int max = tableau[0];

     for ( int i = 1; i < E ; i++){
        if (tableau[i] > max)
            max = tableau[i];

     }

     printf("la valeur du nombre maximum est %d", max);


return 0;





}
