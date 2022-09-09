#include <stdio.h>
#include <math.h>
int main(){
    float xn,yn,xm,ym,distance;
    printf ("Entrer la coordonnee x de n:");
    scanf("%d",&xn);

  printf ("Entrer la coordonnee y de n:");
    scanf("%d",&yn);
   printf ("Entrer coordonnee x de m:");
    scanf("%d",&xm);

   printf ("Entrer la coordonnee y de m:");
    scanf("%d",&ym);

    distance=sqrt((xm-xn)*(xm-xn)+(ym-yn)*(ym-yn));
    printf ("la distance entre M et N est %d\n ", distance);

 
   


}

