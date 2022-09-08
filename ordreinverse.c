#include <stdio.h>
int main(){
    int nombre;
    printf("entrer un nombre a 3 chiffres pour l'inverser :");
    scanf("%d",&nombre);
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d", nombre % 10);
    nombre /= 10;
    printf("%d\n", nombre % 10);

    
}