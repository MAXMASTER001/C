#include <stdio.h>
#include <locale.h>


int main(){

// dosya windowsta code page olarak windows 1254 olarak kay�t edilmeli!
  setlocale(LC_ALL, "Turkish");


  printf("Merhaba, D�nya!");


  return 0;
}