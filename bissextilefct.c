#include<stdio.h>
#include <stdbool.h>


bool is_leap_year(int annee){
    
    bool bissextile =false;
    if((annee%4==0 && annee%100!=0) || annee%400==0){
        bissextile =true;
    }
    return  bissextile;
    }
     
int main(){
    int annee,x;
    printf ("Entrer une annee:");
    scanf("%d",&annee);
    x=is_leap_year(annee);
    if(x==true){
        printf ("cet annee est  bissextile ");
    }
    else{
        printf ("cet annee n'est pas bissextile ");
    }

}