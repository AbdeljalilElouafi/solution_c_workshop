#include <stdio.h>
#include <string.h>


       struct Etudiant{

             char nom[20];
             char prenom[20];
             int notes[3];

       };

int main(){

         struct Etudiant etudiant1;

         strcpy(etudiant1.nom, "ELOUAFI");
         strcpy(etudiant1.prenom, "Abdeljalil");
         etudiant1.notes[0] = 15;
         etudiant1.notes[1] = 13;
         etudiant1.notes[2] = 19;

         printf("Nom: %s\n", etudiant1.nom);
         printf("Prenom: %s\n", etudiant1.prenom);
         printf("La note du math %d\n", etudiant1.notes[0]);
         printf("La note du langue francaise %d\n", etudiant1.notes[1]);
         printf("La note d'education islamique %d\n", etudiant1.notes[2]);


return 0;
}
