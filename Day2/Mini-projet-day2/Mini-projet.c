#include<stdio.h>

void ajouter( int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count ){

        for (int i=0; i < count; i++){

     printf("Entrer les infos de livre %d: \n",i+1);

     printf("ENTRER LE TITRE DU LIVRE : ");
     scanf("%s", &Titre[i]);

     printf("ENTRER LE NOM DE LAUTEUR : ");
     scanf("%s", &Auteur[i]);

     printf("ENTRER LE PRIX DE CE LIVRE : ");
     scanf("%f", &prix[i]);

     printf("ENTRER LA QUANTITE EN STOCK : ");
     scanf("%d", &QSTOCK[i]);

        }
     }
     void afficher(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){
       for (int i=0; i < count; i++){

       printf("Le livre %d: Titre %s, Auteur %s, Prix %.2f, quantite de livre %d \n", i+1, Titre[i], Auteur[i], prix[i], QSTOCK[i]);

    }

     }
 const int maxlivre = 100;
int main(){

    int QSTOCK [maxlivre];
    char Titre[maxlivre] [50];
    char Auteur[maxlivre] [50];
    float prix [maxlivre];
    int count;
    int choix=0;

    printf("Entrer le nombre de livre ce que tu veux: ");
    scanf("%d", &count);

    ajouter(QSTOCK, Titre, Auteur, prix,count);

    afficher(QSTOCK, Titre,  Auteur, prix, count);


   // printf("ENTRER 1 POUR INSERER UN LIVRE, 2 POUR QUITTER : ");
    //scanf("%d", &choix);

    /* while(choix!=3){

     printf("ENTRER 1 POUR INSERER UN LIVRE, 2 POUR AFFICHER LES LIVRES DIPONIBLE, 3 POUR QUITTER : ");
    scanf("%d", &choix);
    if (choix==3){
    return 0;

    } else if(choix==1){


     printf("ENTRER LE TITRE DU LIVRE : ");
     scanf("%s", &Titre[count]);

     printf("ENTRER LE NOM DE LAUTEUR : ");
     scanf("%s", &Auteur[count]);

     printf("ENTRER LE PRIX DE CE LIVRE : ");
     scanf("%f", &prix[count]);

     printf("ENTRER LA QUANTITE EN STOCK : ");
     scanf("%d", &QSTOCK[count]);
     count++;

    }

    else {

        printf(" LE CHOIX EST INVALIDE!: \n");

    }
    }*/

    return 0;

    }


