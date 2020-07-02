#include <stdio.h>
int main(){
  int i=0,j=0,sum=0;

  scanf("%d", &j);

  for(i=1;i<=j;i++){
    sum = i+sum;
  }

  printf("your sum is: %d\n", sum);

return 0;



}