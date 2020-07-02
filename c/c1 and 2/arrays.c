#include <stdio.h>
int main(){

  int array [9];
  int input;
  int output;
  int i = 0;
  int x = 0;

  printf("Enter ingridents in order: \n");

  for( i=0 ; i<9 ; i++ ){
    scanf("%d", &input);
    array[x] = input;
  }
  
  scanf("%d", &output);
  printf("%d\n", array[output]);

return 0;
}