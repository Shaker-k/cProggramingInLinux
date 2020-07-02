#include <stdio.h>
int main(void){
  
  int secretNum=0;
  int inputNum=0;
  int counter=0;

  scanf("%d", &secretNum);

  while(inputNum != secretNum){
    
    scanf("%d", &inputNum);

    if(inputNum<secretNum){
      printf("it is more\n");
    }
    if(inputNum>secretNum){
      printf("it is less\n");
    }
    counter++;

  }
  printf("number of tries needed: %d\n", counter);

}