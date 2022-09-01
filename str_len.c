#include <stdio.h>
#include <locale.h>
int uzunluk(char *str);
int main(){

// dosya windowsta code page olarak windows 1254 olarak kayýt edilmeli!
  setlocale(LC_ALL, "Turkish");

// char str[] = "Mehmet";
char *str = "Mehmet Yýldýrým";

printf("%s %i karakter uzunluðundadýr", str, uzunluk(str));

  return 0;
}

int uzunluk(char *str) {
int i=-1;
do
{
  i++;
//} while (str[i]!='\0'); alltaki satýrla özdeþ
} while (*(str + i )!='\0');
return i;

}



