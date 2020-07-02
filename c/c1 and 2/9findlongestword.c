#include <stdio.h>
int main(){

  int numWords; int j=0, x=0; char words[101]; int l;

  scanf("%d", &numWords);


  for(j=0;j<numWords;j++){

    scanf("%s", words);

    l=0;
    while(words[l] !='\0'){
      l++;
    }
    if(l > x){
      x = l;
    }
  }
    
  
  printf("%d\n", x);


  



return 0;
}