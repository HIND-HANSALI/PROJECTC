#include <stdio.h>


int echange(int a,int b){
    
    a=b;
    return a;

}
int main(){
    int a,b;
    printf("entrer la valeur de a :");
    scanf("%d",&a);
    printf("entrer la valeur de b :");
    scanf("%d",&b);
    printf("la valeur de a apres l'echange est %d ",echange(a,b));

}