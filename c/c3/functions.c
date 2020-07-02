#include <stdio.h>

/* function PROTOTYPE, the compiler know there is a function that will come */
int sum(int , int);

int main(){
  int a, b;
  int output;

  printf("Please enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("You entered %d and %d.\n", a, b);
  output = sum(a, b); /* a and b are called ARGUMENTS */
  printf("Result of the sum = %d.\n", output);

return 0;
}
/* Function DEFINITION */
int sum(int x, int y){  /* x and y are called PARAMETERS values are copied into them*/
  printf("starting the computation...\n");
  int compute;
  compute=x+y;
  printf("finished the computation successfuly.\n");
  return compute;
}