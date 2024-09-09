#include <stdio.h>
#include <string.h>

     struct Rectangle {

            float longeur;
            float largeur;

     };

int main(){

        float air;
        struct Rectangle rectangle1;
        rectangle1.largeur = 3.4;
        rectangle1.longeur = 8 ;

        air = rectangle1.largeur*rectangle1.longeur;
        printf("L'air du rectangle = %.2f", air);

}
