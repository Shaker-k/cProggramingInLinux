#include <stdio.h>
int main(){
  int i=0, two=2;
  char name[51];

  scanf("%s", name);

while(name[i] !='\0'){
  i++;
}

  if(i%two){
  printf("2\n");
  }else{
  printf("1\n");
  }

return 0;
}
