#include <stdio.h>
int main(void){
  int input, i=0;
  char F_name[101];
  char L_name[101];

scanf("%d", &input);

  for(i=0;i<input;i++){
    scanf("%s %s", F_name, L_name);
    printf("%s %s\n", L_name, F_name);
  }
  
return 0;
}