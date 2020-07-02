#include <stdio.h>
int main(){
  char word1[50];
  char word2[50];
  int i = 0;

  printf("Please enter a word: \n");
  scanf("%s", word1);
  printf("Please enter a second word: \n");
  scanf("%s", word2);
//find first letter in which words differ.
while(word1[i] == word2[i] && word1[i] != '\0' && word2[i] != '\0')
  i++;

if (word1[i] > word2[i]){
  printf("Word %s comes before word %s alphabitacly.\n", word2, word1);
}else if (word2[i] > word1[i]){
  printf("Word %s comes before word %s alphabitacly.\n",word1, word2);
}else{
  printf("You have entered the word %s twice!.\n", word1);
}
return 0;
}
