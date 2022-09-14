#include <stdio.h>
struct etudiant{
    int matricule;
    char nom[10];
    int age;
    float note;
};


int main(){
    struct etudiant etudiant[2];
    
    int i,n;
    printf("entrer le nombre des etudiants :");
    scanf("%d",&n);
    printf("donner les infos des etudiants :\n");

    for(i=0;i<n;i++){
        printf("entrer le numero de matricule :");
        scanf("%d",&etudiant[i].matricule);
        printf("entrer le nom :");
        scanf("%s",etudiant[i].nom);
        printf("entrer l'age :");
        scanf("%d",&etudiant[i].age);
         printf("entrer la note :");
        scanf("%d",&etudiant[i].note);
    }
    for(i=0;i<n;i++){
        printf("le numero de matricule :%d\n",etudiant[i].matricule);
        printf("le nom :%s\n",etudiant[i].nom);
        printf("l'age :%d\n",etudiant[i].age);
        printf("la note :%d\n",etudiant[i].note);

    }
}