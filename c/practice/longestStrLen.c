#include <stdio.h>
int main(){
  char words[101];
  int i=0, j=0;
  int wordsNum;
  int x=0;

  scanf("%d", &wordsNum);

  for(i=0; i<wordsNum; i++){
    scanf("%s", words);
    j=0;
    while(words[j] != '\0'){
      j++;
    }
    if( j>x ){
      x=j;
    }
  }
  printf("%d\n", x);
return 0;
}