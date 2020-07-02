#include <stdio.h>
int main(){

  int leafIN = 0, tallIN = 0;


scanf("%d", &tallIN);
scanf("%d", &leafIN);

  int tin = (tallIN<=5) && (leafIN>=8);
  int cal = (tallIN>=10) && (leafIN>=10);
  int fal = (tallIN<=8) && (leafIN<=5);
  int dor = (tallIN>=12) && (leafIN<=7);

if(tin){
  printf("Tin\n");
}else if (cal){
  printf("cal\n");
}else if (fal){
  printf("fal\n");
}else if (dor){
  printf("dor\n");
}else{
  printf("uncertain\n");
}





return 0;
}