#include <stdio.h>
#include <string.h>

     struct Personne{

            char nom[20];
            char prenom[20];
            int age;
     };

int main(){

         struct Personne personne1;
         strcpy(personne1.nom, "Elouafi") ;
         strcpy(personne1.prenom, "Abdeljalil");
         personne1.age = 22;

       printf("Nom: %s\n", personne1.nom);
       printf("Prenom : %s\n", personne1.prenom);
       printf("Age : %d\n", personne1.age);

return 0;
}
