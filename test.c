#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mehmet.h"

int main() {
   char str[] = "mehmet mustafa ";
char *result = buyukharf(str);
int uz = strlen(result);
printf("result uzunlugu %d\n",uz);
 for (int i=0;i<strlen(result);i++) {
   printf("%c", result[i] );

  }
  free(result);

   return 0;
}



