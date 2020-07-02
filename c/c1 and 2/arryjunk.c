#include <stdio.h>
int main(){
  int array[10];
  int input;
  int i;

  for(i=0;i<10;i++){
    scanf("%d", &input);
    array[i] = input;
  }
  scanf("%d", &input);
  printf("%d\n", array[input]);

return 0;
}