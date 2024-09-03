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


            printf("%d", tableau[i]);
}

return 0;





}
