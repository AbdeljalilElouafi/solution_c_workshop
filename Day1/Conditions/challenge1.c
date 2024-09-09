#include<stdio.h>

int main(){

   int N;
   printf("Enter your favourite number: ");
   scanf("%d", &N);

   printf(N %2 == 0 ? printf("Le nombre %d est pair", N): printf("Le nombre %d est impair ", N));


   return 0;

}
