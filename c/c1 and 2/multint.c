#include <stdio.h>
int main()
{
  int enginePower;
  int resistance;
  int weight;
  int height;
  int x;
  int i = 0;
  int j = 0;

  printf("Enter the number of robots to be deployed:\n");
  scanf("%d", &x);
  printf("Choose robot specs in the following order Power Resistance Weight Hight:\n");
      for(i = 0; i < x; i++)
    {
      scanf("%d %d %d %d", &enginePower, &resistance, &weight, &height);
      j = j + ((enginePower+resistance)*(weight-height));
    }

  printf("The power of all robots will be: %d", j);

return 0;
}


/*
#include <stdio.h>

int main(void) {

    int i, numRobots, height, weight, engine, resistance, sum;

    scanf("%d\n", &numRobots);

    sum = 0;

    for (i = 0; i < numRobots; i++){
        scanf("%d %d %d %d", &height, &weight, &engine, &resistance);
        sum = sum + (engine + resistance)*(weight - height);
    }

    printf("%d", sum);

    return 0;
}
*/