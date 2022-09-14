#include <stdio.h>


int echange(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("l'echange de a mtn  est %d ",a);

}
int main(){
    int a,b;
    printf("entrer la valeur de a :");
    scanf("%d",&a);
    printf("entrer la valeur de b :");
    scanf("%d",&b);
    echange(a,b);

}