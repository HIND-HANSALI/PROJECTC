#include <stdio.h>
int main(){
 float somme,diff,produit,div;
 int num1,num2,mod;
  printf ("Entrer le nombre1:");
    scanf("%d",&num1);
  printf ("Entrer le nombre2:");
    scanf("%d",&num2);
    somme=num1+num2;
    diff=num1-num2;
    produit=num1*num2;
    printf ("la somme de a et b est %f\n ", somme);
    printf ("la difference de ces deux nombres est %f\n ", diff);
    printf ("la multiplication de ces deux nombres est %f\n ", produit);
    if(num2==0){
        printf("impossible");

    }else{
    div=num1/num2;
    mod=num1%num2;
    printf("la division des  nombres est :%f\n",div);
    printf ("le modulo de ces deux nombres est %d\n ", mod);
    }
    






}