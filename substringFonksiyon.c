#include <stdio.h>
#include <locale.h>

void substring(char *str, char *substr,int start , int length);
int main(){

// dosya windowsta code page olarak windows 1254 olarak kay�t edilmeli!
  setlocale(LC_ALL, "Turkish");

  int start = 5;
  int length = 4;
  char str[100]="S�k� F�k�";
  char substr[100];
 
  substring(str,substr,start,length);
 
  printf("%s", substr);
  

  return 0;
}


void substring(char *str, char *substr,int start , int length)
{
  // bu fonksiyon kendisine g�nderilen substr yi mutate ediyor.
   int i=0;
  while (i<length)
  {
    substr[i]=str[start + i];
    i++;
  }
   substr[i]='\0'; // null terminate the char array
}