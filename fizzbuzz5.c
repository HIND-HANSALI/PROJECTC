#include<stdio.h>

main(){
    int i;

   for (i=0;i<=100;i++){
    if(i%3==0){
        printf("fizz\n");
    }
    if(i%5==0){
        printf("buzz\n");
    }
    if(i%3!=0 && i%5!=0 ){
        printf("%d\n",i);
    }

   } 


}