#include <stdio.h>

char integer='i', decimal='d', character='c';
int total=0;

int totalMemory(int, char);

int main(){

  int inputInteger, n=0, i=0;
  char inputChar;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d %c", &inputInteger, &inputChar);
    if (inputChar == integer || inputChar == decimal || inputChar == character){
    total = total + totalMemory(inputInteger, inputChar);
    }else{ total = 0; break;}
  }
  if (total == 0){
    printf("Invalid tracking code type\n");
  }else{
    printf("%d bytes\n", total);
  }

return 0;
}

int totalMemory(int inputInteger, char inputChar){

  if(inputChar == integer){
    total = (inputInteger * sizeof(int));
  }else if (inputChar == decimal){
    total = (inputInteger * sizeof(double));
  }else if (inputChar == character){
    total = (inputInteger * sizeof(char));
  }

return total;
}