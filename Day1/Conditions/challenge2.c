#include<stdio.h>

int main(){
    char Lettre;


    printf("Entrer votre une lettre: ");
    scanf("%c", &Lettre);

    // char Voyelles[] = {'a', 'e', 'y', 'u', 'i', 'o'} ;

    switch (Lettre){

     case 'a':
        printf("La lettre a est un voyelle");
        break;

    case 'e':
        printf("La lettre e est un voyelle");
        break;

    case 'y':
        printf("La lettre y est un voyelle");
        break;

    case 'u':
        printf("La lettre u est un voyelle");
        break;

    case 'i':
        printf("La lettre i est un voyelle");
        break;

    case 'o':
        printf("La lettre o est un voyelle");
        break;

    default:
        printf("La lettre que vous avez entrer nest pas un voyelle");
        break;
    }

    return 0;




    }







