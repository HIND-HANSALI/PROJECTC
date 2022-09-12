#include <stdio.h>
#include <stdbool.h>



int divededby(int a,int b){
    return a/b;

}
bool isPremier(int a,int b){
    int i;
    bool premier= true;
    for(i=2;i<=divededby(a,b);i++){
        if(divededby(a,b)%i==0){
            premier=false;
        }
    }
    return premier;
}
int main(){
    int a,b;
    bool x;
    printf ("Entrer le nombre a:");
    scanf("%d",&a);
    printf ("Entrer le nombre b:");
    scanf("%d",&b);

    x=isPremier(a,b);
    if(x==true){
        printf ("ce nombre est premier ");
            }
    else{
        printf ("ce nombre est non premier");
        }

    }