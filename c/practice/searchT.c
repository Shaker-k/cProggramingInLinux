#include <stdio.h>
int main(){
  char word[51];
  int mid=0;
  int x=0;
  int i=0;


  scanf("%s", word);
  while(word[i] != '\0'){i++;}
  if(i%2){mid = (i / 2) + 1;}
  else{mid = (i/2);}

for(x=0; x<=mid; x++){
  if(word[x]=='T' || word[x]=='t'){
    printf("1");
    return 0;
  }
}
for(x=i; x>mid; x--){
  if(word[x]=='t' || word[x]=='T'){
    printf("2");
    return 0;
  }
}
for(x=0;x<=mid;x++){
  if(word[x]!='t' && word[x]!='T'){
    printf("-1");
    return 0;
  }
}

return 0;
}