#include <stdio.h>
#include <stdlib.h>

int uzunluk(char *str) {
int i=-1;
do
{
  i++;
//} while (str[i]!='\0'); alltaki satırla özdeş
} while (*(str + i )!='\0');
return i;

}
char *substring(char *str, int start , int length)
{
  // bu fonksiyon kendisine g�nderilen substr yi mutate ediyor.
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

char *buyukharf(char *str) {
int len = strlen(str);
int mi = sizeof(char) * len ;
char *upper =  malloc(mi);
int i = 0;
do
    {
        if (str[i]!=32)
        {
             upper[i] = str[i] - 32;
        } else {
        
             upper[i] = str[i];
        }
        
            i++;
    } while (i<len);
    

upper[i] ='\0';

return upper ;
}
