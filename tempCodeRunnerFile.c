#include <stdio.h>

int main(){
    char nom1[4],nom2[4],i,j,n=0;
    printf("entrerla 1ere chaine de caracteres contenant que A B C D :");
    scanf("%s",&nom1);
    printf("entrerla 2eme chaine de caracteres contenant que A B C D :");
    scanf("%s",&nom2);


    for(i=0;i<4;i++){ 
        for(j=0;j<4;j++){
            if (nom1[i]== nom2[j]){
                n++;
                break;
            }
        }
        
    }
        if (n==4){
            printf(" les deux chaines de caracteres sont des anagrammes");
        }
        else{
            printf(" les deux chaines de caracteres ne sont pas des anagrammes");
        }


    


}
