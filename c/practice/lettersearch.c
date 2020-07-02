#include <stdio.h>
int main(){
  char word[51];
  int center;
  int i=0,j=0,x=0,y=0;
  int a=0,b=0;
  int found=0;
  char Cons1='t';
  char Cons2='T';

  scanf("%s", word);

  while(word[i] != '\0'){
    i++;
  }

  if(i%2 == 0){
    center = i/2;
  }else{
    center = ((i/2)+1);
  }

  while((word[a] != Cons1 || word[a] != Cons2) && !found && a<center){
    if((word[a] == Cons1 || word[a] == Cons2) && a<center){
      printf("1");
      x++;
      found = 1;
    }
    if((word[a] != Cons1 || word[a] != Cons2) && a>center){
      printf("2");
      y++;
      found = 1;
    }
    else{
      a++;
    }
  }
  if(x==0 && y==0){
  printf("-1");
  }

return 0;
}