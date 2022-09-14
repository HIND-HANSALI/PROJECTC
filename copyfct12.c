#include<stdio.h>

//a source b destination
void copy(char *a,char *b){  //p --> q  
  char *q,*p;
  p=a;
  q=b;
  // while(*p != '\0'){
  // *q=*p;
  // p++;
  // q++;
  // }
  // *q='\0';
  //  }  

  for(p=a,q=b;*p != '\0'; p++,q++){
    *q=*p;
  }
  *q='\0';

}

int main(){
char a[10];
char b[]="bonjour";
    // printf("entrer la 1ere chaine de caracteres  :");
    // scanf("%s",&nom1);
    printf("avant copy:%s\n",a);
    copy(b,a);
    printf("%s",a);

}

