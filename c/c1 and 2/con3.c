#include <stdio.h>
int main()
{
  double d1, d2;
  int i1;

  scanf("%lf", &d1);
  scanf("%lf", &d2);
  
  i1 = (int) (d1/d2);

  printf("%d\n", i1);

return 0;
}