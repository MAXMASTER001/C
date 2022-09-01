#include <stdio.h>
#include <locale.h>


int main(){

// dosya windowsta code page olarak windows 1254 olarak kayžt edilmeli!
  setlocale(LC_ALL, "Turkish");


  printf("Merhaba, Dünya!");


  return 0;
}