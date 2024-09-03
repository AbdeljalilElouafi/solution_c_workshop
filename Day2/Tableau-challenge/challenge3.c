#include <stdio.h>

int main(){

int E;
int S;


     printf("ENTRER LES ELEMENTS DU TABLEAU : ");
     scanf("%d", &E);

     int tableau[E];

     for (int i=0; i < E ; i++){


     printf("ENTRER  ELEMENT %d : ", i+1);
     scanf("%d", &tableau[i]);
     S = S + tableau[i];


}



            printf("%d", S);



return 0;


}

