#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *substring(char *str, int start , int length);
int main(){

// dosya windowsta code page olarak windows 1254 olarak kayžt edilmeli!
  setlocale(LC_ALL, "Turkish");

  int start = 7;
  int length = 8;
  char *str="Mehmet Yýldýrým";
  char*  substr;
 
  substr = substring(str,start,length);
 
  printf("%s", substr);
  free(substr);

  return 0;
}


char *substring(char *str, int start , int length)
{
  // bu fonksiyon kendisine gÖnderilen substr yi mutate ediyor.
   int i=0;
  char *substr = (char*) malloc(sizeof(char) * (length +1)) ;
  while (i<length)
  {
    substr[i]=str[start + i];
    i++;
  }
   substr[i]='\0'; // null terminate the char array
   return substr;
}