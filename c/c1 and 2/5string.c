#include <stdio.h>
int main(void){
  char words[101];
  int input, i;

  scanf("%d", &input);
  scanf("%s", words);
  printf("\n\n");

  for(i=0;i<input;i++){
    printf("%s\n", words);
  }
return 0;
}