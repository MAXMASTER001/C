#include <stdio.h>
#include <locale.h>
int uzunluk(char *str);
int main(){

// dosya windowsta code page olarak windows 1254 olarak kay�t edilmeli!
  setlocale(LC_ALL, "Turkish");

// char str[] = "Mehmet";
char *str = "Mehmet Y�ld�r�m";

printf("%s %i karakter uzunlu�undad�r", str, uzunluk(str));

  return 0;
}

int uzunluk(char *str) {
int i=-1;
do
{
  i++;
//} while (str[i]!='\0'); alltaki sat�rla �zde�
} while (*(str + i )!='\0');
return i;

}



