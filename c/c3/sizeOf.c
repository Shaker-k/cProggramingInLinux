#include <stdio.h>
int main(){
  char c;
  int i=1;
  double d;
  char listChar[3];
  int listInt[3];
  double listDouble[3];

  printf("%zu العربية \n", sizeof(char));
  printf("%zu\n\n", 2 * sizeof(char));
  printf("%zu\n", sizeof(int));
  printf("%zu\n", sizeof(double));
  printf("%zu\n", sizeof(c));
  printf("%zu\n", sizeof(i));
  printf("%zu\n", sizeof(d));
  printf("%zu\n", sizeof(listChar));
  printf("%zu\n", sizeof(listInt));
  printf("%zu\n", sizeof(listDouble));

return 0;
}