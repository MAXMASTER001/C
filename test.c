
#include <stdio.h>

int len(char *str);

int main() {

 char isim[] ="ABCDe";
 
 int sonuc = len(isim);
 printf("%i",sonuc);


  return 0;
}

int len(char *str) {
int i=-1;
 
 do {
 	i++;
//printf("%i",i);
if (str[i]=='\0') {
//puts("aha");
//printf("%i",str[i]);
}
//printf("%c\n",str[i]);

 } while (str[i]!='\0');
 
 return i;
}
