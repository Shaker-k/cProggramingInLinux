#include <stdio.h>
int main(){
  int ingredient;
  int i=0;
  double weight [10];
  double price [10];
  double totalCost=0.0;

  scanf("%d", &ingredient);

  for (i=0;i<ingredient;i++){
    scanf("%lf", &price[i]);
  }
  i=0;

  for (i=0;i<ingredient;i++){
    scanf("%lf", &weight[i]);
  }
  i=0;

  for (i=0;i<ingredient;i++){
    totalCost = totalCost + (price[i] * weight[i]);
  }
  
  printf("%.6lf", totalCost);

return 0;
}