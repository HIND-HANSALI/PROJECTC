#include <stdio.h>

int main(){
    int num1,num2,somme;
    printf("entrer la 1ere valeur :");
    scanf("%d",&num1);
    printf("entrer la 2eme valeur :");
    scanf("%d",&num2);
    somme=num1+num2;
    if(num1==num2){
        somme=somme*3;
    }
 printf("la somme est  :%d",somme);   
}