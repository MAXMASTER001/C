#include <stdio.h>
#include <locale.h>

int main(){

// dosya windowsta code page olarak windows 1254 olarak kayıt edilmeli!
  setlocale(LC_ALL, "Turkish");

  int start = 6;
  int length = 5;
  char str[100]="Quick brown fox jump over";
  char substr[100];
  int i=0;
  while (i<length)
  {
    substr[i]=str[start + i];
    i++;
  }
  substr[i]='\0';
  
  printf("%s\n",substr);



  return 0;
}



