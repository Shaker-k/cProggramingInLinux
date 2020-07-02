#include <stdio.h>
int main(){
  int totalPopulation;
  int days=1;
  int infected=1, infectedTotal=1;

  scanf("%d", &totalPopulation);
  
  while(infectedTotal<totalPopulation){
    days++;
    infected = infected*2;
    infectedTotal = infectedTotal + infected;
  }
  printf("%d", days);
return 0;
}