#include <stdio.h>
int main(){
  int totalPopulation;
  int days=0;
  int x=1;

  scanf("%d", &totalPopulation);

  while(x <= totalPopulation){
    days++;
    x = x*2;
  }
  printf("%d", days);
return 0;
}
//not 100% right