#include <stdio.h>
int main(){
  int wordNum=0;
  int i=0;
  int j=0;
  int max=0;

  char string[101];

  scanf("%d", &wordNum);

  for(i=0;i<wordNum;i++){
    scanf("%s", string);

    j=0;
    while(string[j] != '\0'){
      j++;
    }

    if (j > max){
      max = j;
    }
  }
  printf("%d\n", max);
  
return 0;
}