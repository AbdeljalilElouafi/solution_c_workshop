#include<stdio.h>
#include<string.h>

     void ajouterLivre(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){


     printf("Entrer les infos de livre %d: \n",count + 1 );

     printf("ENTRER LE TITRE DU LIVRE : ");
     scanf("%s", &Titre[count]);

     printf("ENTRER LE NOM DE LAUTEUR : ");
     scanf("%s", &Auteur[count]);

     printf("ENTRER LE PRIX DE CE LIVRE : ");
     scanf("%f", &prix[count]);

     printf("ENTRER LA QUANTITE EN STOCK : ");
     scanf("%d", &QSTOCK[count]);

}
     void afficher(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){
       for (int i=0; i < count; i++){

        printf("--------- LE LIVRE %d --------- \n", i + 1);
        printf("----- le titre : %s .\n", Titre[i]);
        printf("----- l'auteur : %s .\n", Auteur[i]);
        printf("----- le prix : %.2f .\n", prix[i]);
        printf("----- la quantite : %d .\n", QSTOCK[i]);
        printf("---------------------------------\n");

       }
    }

     void rechrcher(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){



         char trouvertitre[50];
           printf("Tapez le titre du livre : ");
           scanf("%s", &trouvertitre);

           for (int i=0; i < count; i++){
                if (strcasecmp(trouvertitre, Titre[i])== 0){
                       printf("--------- LE LIVRE %d --------- \n", i + 1);
        printf("----- le titre : %s .\n", Titre[i]);
        printf("----- l'auteur : %s .\n", Auteur[i]);
        printf("----- le prix : %.2f .\n", prix[i]);
        printf("----- la quantite : %d .\n", QSTOCK[i]);
        printf("---------------------------------\n");

                }
           }


     }
     void update(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){


                 char nometitre[50];
                 int nouvellequantite;
                         printf("Entrer le titre du livre : ");
                         scanf("%s", &nometitre);
                     for (int i=0; i < count; i++){
                            if (strcasecmp(nometitre, Titre[i])== 0){
                                   printf("Entrer la nouvelle quantite du stock: ");
                                   scanf("%d", nouvellequantite);
                                   QSTOCK[i] = nouvellequantite;
                                   printf("La nouvelle quantite du film %s est: %d", nometitre, nouvellequantite);
                }
         }
     }
     void supprimer(int QSTOCK[],char Titre[][50],char Auteur[][50],float prix[],int count){
           char searchtitre[50];
           int index;
                   printf("Entrer le titre du livre ce que tu veux supprimer: ");
                   scanf("%s", &searchtitre);
                    for (int i=0; i < count; i++){
                            if (strcasecmp(searchtitre, Titre[i])== 0){
                                   index=i;
                            }
                    }
                     for(int i=index; i < count-1; i++){

                        strcpy(Titre[i], Titre[i+1]);
                        strcpy(Auteur[i], Auteur[i+1]);
                        prix [i]= prix[i+1];
                        QSTOCK[i]= QSTOCK[i+1];
                     }
     }



 const int maxlivre = 100;
int main(){

    int QSTOCK[maxlivre];
    char Titre[maxlivre][50];
    char Auteur[maxlivre][50];
    float prix[maxlivre];
    int count = 0;
    int choix=0;



    while(1){

        printf("-----MENU: \n");
        printf("1- Ajouter un livre au stock.\n");
        printf("2- Afficher tous les livres disponibles.\n");
        printf("3- Rechercher un livre par son titre.\n");
        printf("4- Mettre à jour la quantité d'un livre.\n");
        printf("5- Supprimer un livre du stock.\n");
        printf("6- Afficher le nombre total de livres en stock.\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);

       switch(choix){

       case 1:
           ajouterLivre(QSTOCK, Titre, Auteur, prix,count);
           count++ ;
           break;
       case 2:
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
           break;
       }

    }

     return 0;
    }



