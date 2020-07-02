#include <stdio.h>
int main ()
{
  int passengers;
  double cost, j;

  scanf("%d", &passengers);
  scanf("%lf", &cost);

  if(passengers){
    cost = cost + 1;
    j = cost / (passengers+1);
  printf("%.2lf\n", j);
  }
  else{
    printf("%.2lf\n", cost);
  }

return 0;
}