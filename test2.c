#include <stdio.h>
#include "power.h"
int main(){
   int fno;
   int pno;
   scanf("%d", &fno);
   scanf("%d", &pno);
   int finalno;
   finalno = power(fno,pno);
   printf("%d", finalno);
   return 0;
}