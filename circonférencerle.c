#include <stdio.h>

void main(){
    float rayon ,surface;
    const float pi=3.14;
    printf("entrer la valeur du rayon :");
    scanf("%f",&rayon);
    surface= rayon*rayon*pi;
    printf("lair du cercle est :%f",surface);

}