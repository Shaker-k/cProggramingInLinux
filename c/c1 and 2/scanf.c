#include <stdio.h>
int main()
{
  double frst, scnd, thrd;
  
  printf("Enter the X multiplication table you want\n");
  scanf("%lf", &frst);
  printf("Enter the Max limit for multiplication table\n");
  scanf("%lf", &scnd);
    for(thrd = 0; thrd <= scnd; thrd++)
    {
    printf("%.2lf*%.2lf=%.2lf\n",frst, thrd, frst*thrd);
    
    }

return 0;
}