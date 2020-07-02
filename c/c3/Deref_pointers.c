#include <stdio.h>
int main(){

  double a = 43.22;
  double * addressOFa = &a;

  printf("At the address %p there is the value %.2lf\n", addressOFa, *addressOFa);

  char c = 'm';
  char * addresOFc = &c;
  char d = *addresOFc;

  printf(" %c\n", d);

  * addressOFa = 32;
  * addressOFa = * addressOFa + 1;

  printf("At the address %p there is the value %.2lf\n", addressOFa, *addressOFa);

return 0;
}