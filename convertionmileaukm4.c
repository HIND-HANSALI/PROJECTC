#include<stdio.h>

main(){
    float metre;
    
    float mile;

printf ("entrer la distance en mile :");
scanf("%f",&mile);
metre=(mile/1.609)*1000;
printf ("la distance en metre est :%.3f",metre);



}