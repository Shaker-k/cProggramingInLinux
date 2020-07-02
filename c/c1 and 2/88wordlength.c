#include <stdio.h>
int main(){

  int i=0, t=0, l=0, j=0;
  int nbWords = 0;
  int length[10]; //number of 5-letter length words in the text //number of word's length will be corespodent to array[num]+1.

  char word[11];

  for(i=0;i<10;i++){
    length[i]=0;
  }

  scanf("%d", &nbWords);
  for(t=0;t<nbWords;t++){
    scanf("%s", word);
    l = 0;
    while(word[l] !='\0'){
      l++;
    }
    length[l] = length[l] + 1; //for ex: the third letter in a word will be in 0 1 2 and we want to display that its position number which is 3.
    printf("%s %d\n", word, l);
  }
  for(j=0;j<10;j++){
    printf("There are %d words with %d letters.\n", length[j], j);
  }

return 0;
}