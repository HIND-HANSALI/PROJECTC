#include<stdio.h>

main(){
    char nom[10];
    char prenom[10];
    int age;
    char numtel[11];
    
    char sexe[10];


    printf("entrer votre prenom :");
    scanf("%s",prenom);
    printf("entrer votre nom :");
    scanf("%s",nom);
    printf("entrer votre age :");
    scanf("%d",&age);
     printf("entrer votre numero de telephone :");
    scanf("%s",numtel);
    
    printf("entrer votre sexe :");
    scanf("%s",sexe);
     
     printf("mon nom est :%s\n mon prenom est: %s\n mon age est: %d",nom, prenom,age);






    
}