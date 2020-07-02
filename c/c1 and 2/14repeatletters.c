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



/*#include <stdio.h>
int main(){
  char word[51];
  int i=0,j=0,n=0;
  char swap = 'x';
  int counter=0;
  int dummy = 0;

  scanf("%s", word);

  while(word[n] != '\0'){
    n++;
  }

//  printf("%d\n", n);

  for(i=0; i<=n;i++){
    for(j=0; j<=n; j++){
      if(word[j]>word[j+1] && j<n){
        swap = word[j];
        word[j] = word[j+1];
        word[j+1] = swap;
      }
    }
  }
  for(i=0; i<=n; i++){//test
    printf("%c", word[i]);
  }printf("\n\n");

  while(word[i] != '\0')
  {
    if(word[i] == word[i+1]){
      //while(word[i]==word[i+1]){
      //  i++;
      //printf("%d",i);
      //}
      counter++;
      //printf("%d",counter);
    }
    i++;
    //printf("%d",i);
  }
  printf("%d\n", counter);
return 0;
}

/*  for(i=0; i<=n; i++){
    printf("%c", word[i]);
  }printf("\n\n");*/
 
 /* for(i=0; i<=n; i++){                      wronge
    if(word[i] == word[i+1] && i<n && ){
      counter++;
    if(counter>1){
      i=i+counter;
      dummy++;
    }
    }
  }
  printf("%d\n", counter);                    wronge
*/