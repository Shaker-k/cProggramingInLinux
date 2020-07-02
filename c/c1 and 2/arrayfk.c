#include <stdio.h>
int main(){
  int cars;
  int i=0, j=0;

  double carsWeight[50];
  double totalAvarage;
  double avarageWeight;
  double distroWeight;
  
  scanf("%d", &cars);

  for(i=0;i<cars;i++){
    scanf("%lf", &carsWeight[j]);
    j = j + 1;
  }
  
  j = 0;
  totalAvarage = 0;

  for(i=0;i<cars;i++){
    totalAvarage = totalAvarage + carsWeight[j];
    j = j + 1;
  } avarageWeight = totalAvarage / cars;
  
  j = 0;

  for(i=0;i<cars;i++){
    distroWeight = avarageWeight - carsWeight[j];
    j = j + 1;
    printf("%.1lf\n", distroWeight);
  }

//printf("%.1lf", avarageWeight);


  return 0;
}