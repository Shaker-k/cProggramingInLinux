#include <stdio.h>
int main(){

  /* constants */
  double
    cel = 0.0,
    feet = 3.2808,
    pounds = 0.002205,
    fahren = 32 + (cel * 1.8);
  /* memory 
    meter = 0.0,
    gram = 0.0,
    cel = 0.0;
  */
  /* constants */
  char 
    _meter = 'm',
    _gram = 'g',
    _cel = 'c';
  /* variables */
  int x=0, i=0;

  /* input values */
  char char_input;
  double num_input = 0.0;

  scanf("%d", &x);

  for(i=0; i<x; i++){
    scanf("%lf %c", &num_input, &char_input);
    if(char_input == _meter){
      printf("%lf ft\n", num_input * feet);
    }else if(char_input == _gram){
      printf("%lf lbs\n", num_input * pounds);
    }else if(char_input == _cel){
      cel = num_input;
      fahren = 32 + (cel * 1.8);
      printf("%lf f\n", fahren);
    }else{
      printf("Error...\n");
    }
  }

return 0;
}