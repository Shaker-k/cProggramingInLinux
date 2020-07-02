#include <stdio.h>
int main(){
  int i=0, x=0, cars=0, cars2=0, cars3=0,carx=0, toAvarage=0;
  double carsWeights=0.0;
  double array[cars], totalweight=0.0, avarageWeight=0.0, modifiedWeight=0.0;

  scanf("%d\n", &x);
  toAvarage = x;
  carx = x;
  for(i=carx;i>=0;i--){
    scanf("%lf", &carsWeights);
    array[cars] = carsWeights;
    cars = cars + 1;
  }

  for(i=carx;i>=0;i--){
    totalweight = totalweight + array[cars2];
    cars2 = cars2 + 1;
  }
  avarageWeight = totalweight / toAvarage;

  for(i=carx;i>=0;i--){
    modifiedWeight = avarageWeight - array[cars3];
    printf("%.1lf\n", modifiedWeight);
    cars3 = cars3 + 1;
  }


//printf("%lf", totalweight);
  return 0;
}