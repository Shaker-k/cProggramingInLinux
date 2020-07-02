#include <stdio.h>
int main(){
  
  int leafIN = 0, tallIN = 0;

scanf("%d", &tallIN);
scanf("%d", &leafIN);

  int tin = tallIN<=5 && leafIN>=8;
  int cal = tallIN>=10 && leafIN>=10;
  int fal = tallIN<=8 && leafIN<=5;
  int dor = tallIN>=12 && leafIN<=7;

if(tin){
  printf("Tinuviel\n");
}else{
  if(cal){
    printf("Calaelen\n");
  }else{
    if(fal){
      printf("Falarion\n");
    }else{
      if(dor){
        printf("Dorthonion\n");
      }else{
        printf("Uncertain\n");
      }
    }
  }
}
return 0;
}