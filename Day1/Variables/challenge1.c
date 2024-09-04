#include<stdio.h>
int main() {
char Nom [20], Prenom [20], sexe [10], email[50];
int Age;
printf("Please enter your name:");
scanf("%s", Nom);
printf("Enter your surname:");
scanf("%s", Prenom);
printf("Enter your age:");
scanf("%d", &Age);
printf("Enter your gender:");
scanf("%s", &sexe);
printf("Enter your email:");
scanf("%s", email);


printf("Your name is %s \n Your surname is %s \n Your age is %d \n Your gender is %s \n Your email is %s", Nom, Prenom, Age, sexe, email );

return 0;
}
