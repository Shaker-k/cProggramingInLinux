#include <stdio.h>
int main()
{
  int i;
  int numberofnuts = 0;
  int distanceTravel = 0;
for (i = 0; i < 9 ; i++)
  {
    printf("at %d miles i have %d nuts.\n", distanceTravel, numberofnuts);
    distanceTravel = distanceTravel + 1;
    numberofnuts = numberofnuts + 3;
  }
return 0;
}