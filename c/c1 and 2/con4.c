#include <stdio.h>
int main()
{
  int i1 = 120;
  int i2 = 45;
  int i3;
  int i4;
  double d1, d2;

  scanf("%lf",  &d1);
  d2 = d1/120;
  i3 = (int) d2 + 1;
  i4 = (i3*45);
  
  printf("%d\n", i4);

return 0;
}