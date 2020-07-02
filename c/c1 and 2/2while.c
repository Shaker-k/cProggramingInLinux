#include <stdio.h>
int main(){
  int input;
  int terminate=-1;
  int sum=1;
  int i;
  while(i!=terminate){
    scanf("%d", &input);
    sum = sum + input;
    i = input;
  }
  printf("%d\n", sum);
return 0;
}