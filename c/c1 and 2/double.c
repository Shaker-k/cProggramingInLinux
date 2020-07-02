#include <stdio.h>
int main()
{
  double kilos;
  double miles;
printf("Whats your distance traveled: ");
scanf("%lf", &kilos);
miles = kilos*1.609344;
printf("%.3lf\n", miles);
return 0;
}