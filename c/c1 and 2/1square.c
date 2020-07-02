#include <stdio.h>
int main(){
  
  int input=0;
  int i=0, j=0;
  char out = '*';

  scanf("%d", &input);

  for (i=0;i<input;i++){
    for (j=0;j<input;j++){
      printf("%c", out);
    }
    printf("\n");
  }
return 0;
}