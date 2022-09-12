#include<stdio.h>

void copy(char *a,char *b){
  char *q,*p;
  for(p=a,q=b;*p != '\0'; p++,q++){
    *q=*p;
  }
  *q='\0';

}

int main(){
char a[10],b[]="bonjour";
    // printf("entrer la 1ere chaine de caracteres  :");
    // scanf("%s",&nom1);

    copy(b,a);
    printf("%s",b);

}

