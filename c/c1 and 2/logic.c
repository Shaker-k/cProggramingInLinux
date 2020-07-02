#include <stdio.h>
int main(){
  int age1 = 10, age2 = 60;
  int cost1 = 0, cost2 = 5, cost3 = 30;
  int extraPrice = 10;
  int i = 20, x, y;

//printf("hello customer please enter your age: ");
  scanf("%d", &x);
//printf("also please enter the weight of your luggage: ");
  scanf("%d", &y);

    if ( x <= age1 || x >= age2 ){
      if(x <= age1){
        printf("%d\n", cost2);
      }else{
        printf("%d\n", cost1);
      }
    }else{
      if( y >= i ){
        printf("%d\n", cost3+extraPrice);
      }else{
        printf("%d\n", cost3);
      }

    }
return 0;
}