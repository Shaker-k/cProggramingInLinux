#include <stdio.h>
#include <math.h>
int main()
{
  int i1 = 120;
  int i2 = 45;
  int i3;
  int i4;
  double d1, d2;
  float f1;

  scanf("%lf", &d1);
  d2 = d1/120;
  f1 = (float) d1%120;
  if(f1){
  i3 = (int) d2 + 1;
  i4 = (i3*45);
  printf("%d\n", i4);

  }else{
    i3 = d2*i2;
  printf("%d\n", i3);
  }
  

return 0;
}