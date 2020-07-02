#include <stdio.h>
int main(){
  int a = 42;
  double d = 45.23;
  char c = 'r';
  int * addressOFa = &a;
  double* addressOFd = &d;
  char* addressOFc = &c;

  printf("address of a is: %p\n", addressOFa);
  printf("address of d is: %p\n", addressOFd);
  printf("address of c is: %p\n", addressOFc);


return 0;
}