#include <stdio.h>
#include <string.h>

    int count;
    const int max_contact = 100;

     struct Contact{

            char nom[20];
            char number[20];
            char email[50];
     };
     void ajoutercontact(struct Contact contacti){


     printf("Entrer les infos du contact %d: \n",count + 1 );

     printf("ENTRER LE NOM DU CONTACT: ");
     scanf("%s", &contacti.nom[count]);

     printf("ENTRER LE NUMERO DE TELEPHONE : ");
     scanf("%f", &contacti.number[count]);

     printf("ENTRER L'EMAIL DU CONTACT : ");
     scanf("%d", &contacti.email[count]);


     }
     void modifier(struct Contact contacti){

     char nom_contact[20];
     char nouveau_nom[20];

           printf("Entrer le nom du contact : ");
           scanf("%s", &nom_contact);

            for (int i=0; i < count; i++){
                            if (strcasecmp(nom_contact, contacti.nom[i])== 0){
                           printf("Entrer le nouveau nom: ");
                           scanf("%s", nouveau_nom);
                           contacti.nom[i] = nouveau_nom;
                           printf("Le nouveau nom est: %s", nouveau_nom);
                           }
            }




     }


int main(){

    struct Contact conta;
    int choix=0;

    while (1){
    printf("---------MENU---------\n");
    printf("1- Entrer 1 pour ajouter un nouveau contact\n");
    printf("2- Entrer 2 pour modifier un contact\n");
    printf("3- Entrer 3 pour supprimer un contact\n");
    printf("4- Entrer 4 pour afficher tous les contacts\n");
    printf("5- Entrer 5 pour rechercher un contact\n");
    printf(" --------------------------\n");
    printf("Entrer votre choix : ");
    scanf("%d", &choix );

    switch (choix){

     case 1:

          ajoutercontact(conta);
          count ++;
           break;

     /*case 2:

          afficher(QSTOCK, Titre, Auteur, prix,count);
           break;

     case 3:

           rechrcher(QSTOCK, Titre, Auteur, prix,count);
           break;

     case 4:

           update(QSTOCK, Titre, Auteur, prix,count);
           break;

     case 5:

           supprimer(QSTOCK, Titre, Auteur, prix,count);
           break;*/

    }

    }


return 0;

}
