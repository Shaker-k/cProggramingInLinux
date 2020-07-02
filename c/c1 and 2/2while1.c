#include <stdio.h>
int main(){
  int input;
  int sum=1;
  int i;
  while(i!=-1){
    scanf("%d", &input);
    sum = sum + input;
    i = input;
  }
  printf("%d\n", sum);
return 0;
}