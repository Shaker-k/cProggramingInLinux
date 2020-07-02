#include <stdio.h>

void reversArray(int *);

int main(){

  int array[5];
  int i=0;


  for (i=0; i<6; i++){
    scanf("%d", &array[i]);
  }
  reversArray(array);

  for(i=0; i<6; i++){
    printf("%d ", array[i]);
  }printf("\n");


return 0;
}
void reversArray(int *array){
  int swap;

  swap = *(array+0);
  *(array+0) = *(array+5);
  *(array+5) = swap;
  
  swap = *(array+1);
  *(array+1) = *(array+4);
  *(array+4) = swap;
  
  swap = *(array+2);
  *(array+2) = *(array+3);
  *(array+3) = swap;
}











