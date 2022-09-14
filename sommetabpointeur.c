#include <stdio.h>

int main(){
    int T[6];
    int S;
    int *P;
    P=T;// P=&T[0]
    printf( "entrer les valeurs du tableau :\n");
    for(P=T;P<T+6;P++){
    printf("T[%d] =", P-T);
     scanf("%d",  P);
    }
    for(P=T;P<T+6;P++){
    S=S + *P;
    }
    
    printf("la somme des valeurs est :%d",S);
    
   
}