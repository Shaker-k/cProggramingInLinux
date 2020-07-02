#include <stdio.h>
int main(){
int i=0,j=0,x=0;
float y=0;
int array[10];

printf("how many nums?\n");
scanf("%d", &x);

  for(i=0;i<x;i++){
    scanf("%d", &array[i]);
    y = array[i] + y;
  }
  printf("the sum is %.2f\n", y);
  printf("the avarage is %.2f\n", y/x);

return 0;






}