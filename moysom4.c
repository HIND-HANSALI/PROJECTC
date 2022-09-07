#include <stdio.h>
int main(){
    int num1 ,num2,num3,num4,somme;
    float moyenne;
    printf ("Entrer le nombre1:");
    scanf("%d",&num1);
  printf ("Entrer le nombre2:");
    scanf("%d",&num2);
  printf ("Entrer le nombre3:");
    scanf("%d",&num3);
  printf ("Entrer le nombre4:");
    scanf("%d",&num4);

    somme=num1+num2+num3+num4;
    moyenne=(float)somme/4;
    printf ("la somme des nombres est %d\n ", somme);
    printf ("la moyenne des nombres est %f\n ",moyenne);
}
