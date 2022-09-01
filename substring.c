#include <stdio.h>
#include <locale.h>


int main(){

// dosya windowsta code page olarak windows 1254 olarak kayýt edilmeli!
  setlocale(LC_ALL, "Turkish");

  int start = 0;
  int length = 3;
  char str[100]="Quick brown fox jump over";
  char substr[100];
  int i=0;
  while (i<length)
  {
    substr[i]=str[start + i];
    i++;
  }

substr[i]='\0'; // null terminate the char array
  printf("%s", substr);
  


  

  printf("Merhaba, Dünya!");


  return 0;
}