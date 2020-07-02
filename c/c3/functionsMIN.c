#include <stdio.h>

int min(int x, int y);
int main(){
  int i = 0;
  int num=0;
  int sex, sex1;
  int a=0, b=0, z=0;

  scanf("%d", &num);

  scanf("%d", &sex);
  scanf("%d", &sex1);
  while(a<num-2){
    scanf("%d", &sex);
    scanf("%d", &sex1);
    z = min(sex, sex1);
    a+=2;
  }

  printf("%d\n", z);

return 0;
}













int min(int x, int y){
  
  if(x>y){
    return y;
  }else if(y>x){
    return x;
  }else if(x==y){
    return x;
  }
}