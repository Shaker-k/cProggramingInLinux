#include <stdio.h>
int main(){
  int cities[100];
  int population[100];
  int target = 10000;
  int input;
  int output;
  int x=0, y=0;

  scanf("%d", &input);

  for(x=0;x<input;x++){
    scanf("%d", &cities[x]);
  }
  for(x=0;x<input;x++){
    if(population[x]>target){
      y++;
    }
  }
  printf("%d\n", y);
return 0;
}