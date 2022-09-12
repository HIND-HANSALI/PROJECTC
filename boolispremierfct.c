#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPremier(int n){
    int i;
    bool premier= true;
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            premier= false;
            break;
        }
    }
    return premier;
}
int main(){
    int n;
    bool x;
    printf ("Entrer le nombre:");
    scanf("%d",&n);
    x=isPremier(n);
    if(x==true){
        printf ("ce nombre est premier ");
            }
    else{
        printf ("ce nombre est non premier");
        }

    }
    

