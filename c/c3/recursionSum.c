#include <stdio.h>

int sumOfDigits(int);
int total=0;

int main(){

  int input;
  int result=0;

  scanf("%d", &input);
  result = sumOfDigits(input);
  printf("%d\n", result);

return 0;
}
int sumOfDigits(int n){
  if( n >= 10){
  int total = n%10 + sumOfDigits(n/10);
  return total;
  }else{
    return (total + (n%10));
  }
}
















/*int sumOfDigits(int n){
  int soloDigit = n%10;
  int x=0;

  if( n < 10 ){
    return ;
  }else{
    x = sumOfDigits(n);
    return x;
  }
}*/
























