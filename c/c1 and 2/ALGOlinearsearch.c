#include <stdio.h>
int main(){
  int list [] = {2, 4, 6, 8, 13, 15, 17, 19, 20, 1};
  int n = 10, i = 0, item = 0, found = 0;

  printf("Please enter the number your searching for in the matrix: \n");
  scanf("%d", &item);

  while(!found && i<n){
    if(item == list[i]){
      found = 1;
    } else{
      i++;
    }
  }
  if(found){
    printf("The number %d is found in this matrix in the cell position %d\n", item, i);
  } else{
    printf("The number %d is not found in this matrix.\n", item);
  }
return 0;
}