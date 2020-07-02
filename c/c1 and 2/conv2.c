#include <stdio.h>
int main()
{
  double d1, d2, d3;
  int i1;

  scanf("%lf", &d1);
  scanf("%lf", &d2);

  d3 = ((d1*(d2+100))/100);
  i1 = (int) d3;

  printf("%d\n", i1);

return 0;
}