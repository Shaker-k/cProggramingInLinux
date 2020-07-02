#include <stdio.h>
int main(){

  int dice1, dice2, total, cost2, cost = 36;
 
  scanf("%d %d", &dice1,&dice2);
  total = dice1 + dice2;
  cost2 = total * 2;

  if(total >= 10){
    printf("Special tax\n%d\n",cost);
  }else{
   printf("Regular tax\n%d\n",cost2);
  }
return 0;
}