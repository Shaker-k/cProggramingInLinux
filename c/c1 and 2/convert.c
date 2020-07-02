#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;
  int d;
  int num;
  double dnum;

  scanf("%d", &a);
    for(b=0;b<a;b++)
    {
      scanf("%d", &c);
      int num = num + c;
      dnum = (double) num;
    }
  printf("%.2lf", dnum/a);
return 0;
}