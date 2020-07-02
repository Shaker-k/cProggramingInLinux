#include <stdio.h>
int main(){
  int array [3]; // creats an arry that hold three integers
  int readValue = 0;
  int cellNum = 0;
  int i = 0;
  for (i=0; i<3 ; i++){
    printf("Enter a value:");
    scanf("%d", &readValue);
    array[cellNum] = readValue;
    printf("cell number %d contains %d\n", cellNum, array[cellNum]);
    cellNum = cellNum + 1;
  }


return 0;

}