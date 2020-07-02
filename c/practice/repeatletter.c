#include <stdio.h>
int main(){
  char word[51]; char swap; int i=0,j=0,n=0;
  int counter=0; int x=0, y=0;

  scanf("%s", word);

  while(word[n] != '\0')
  n++;

  for(j=0;j<n;j++){
    for(i=0;i<n;i++){
      if(word[i]>word[i+1]){
      swap = word[i];
      word[i] = word[i+1];
      word[i+1] = swap;
  } } }
 
  i=0;
  while(i<n){
    if(word[i]==word[i+1]){
      counter++;
      j=i+2;

      while(j<n &&word[i]==word[j]){
        j++;
      }
    i=j;
    }else{
      i++;
    }
  }
  
  printf("%d\n", counter);
//  for(i=0;i<=n;i++){printf("%c", word[i]);}
//  printf("\n");
return 0;
}