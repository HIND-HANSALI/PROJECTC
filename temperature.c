#include<stdio.h>

main(){
 float Fahrenheit;
 float Celsius;
 printf("entrer la valeur de la temperature en Fahrenheit :");
 scanf("%f",&Fahrenheit);
 Celsius=(Fahrenheit-32)/1.8;
 printf (" la temperature en degré Celsius:%f",Celsius);
if (Celsius<0){
    printf("tres froid");
}
else if(Celsius>0 && Celsius<20){
    printf("froid");
}
else if(Celsius>35 && Celsius<40 ){
    printf(" chaud");

}
else{
    printf(" tres chaud");

}



}






