#include <stdio.h>
#include <locale.h>
#include "mehmet.h"


int main(){

// dosya windowsta code page olarak windows 1254 olarak kayıt edilmeli!
  setlocale(LC_ALL, "Turkish");

char *str ="mehmet";

printf("%s %i karakter uzunlu�undad�r.\n",str, uzunluk(str));

printf("%s nin ilk 3 harfi %s dir ",str, substring(str,0,3));

  return 0;
}