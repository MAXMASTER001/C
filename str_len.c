
#include <stdio.h>

int len(char *str);

int main() {

 char isim[] ="Mehmet";
 
 int sonuc = len(isim);
 printf("%s kelimesinin uzunlugu: %i karakterdir. ",isim,sonuc);
  return 0;
}

int len(char *str) {
int i=-1;
 do {
 	i++;
 } while (str[i]!='\0');
 return i;
}
