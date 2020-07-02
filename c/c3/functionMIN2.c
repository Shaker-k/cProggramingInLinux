#include <stdio.h>

int min(int x, int y);

int main(){

  int dummy=0, input=0, result=0;
  int allNums;
  int i=0;

  scanf("%d", &allNums);

  scanf("%d %d", &dummy, &input);
  result = min(dummy, input);

  for(i=0; i<allNums-2; i++){
    scanf("%d", &input);
    result = min(result, input);
  }
  printf("%d\n", result);

return 0;
}

int min(int x, int y){
  int smaller;

  if(x < y){
    smaller = x;
  }else if(x > y){
    smaller = y;
  }else{
    smaller = x;
  }
  
return smaller;
}