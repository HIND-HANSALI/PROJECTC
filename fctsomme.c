#include <stdio.h>


int somme(int a,int b){
    return a+b;

}
int main(){
    int a,b,resultat;
    printf("entrer la valeur de a :");
    scanf("%d",&a);
    printf("entrer la valeur de b :");
    scanf("%d",&b);

    resultat = somme(a,b);
    printf("Resultat est = %d", resultat);
    

}