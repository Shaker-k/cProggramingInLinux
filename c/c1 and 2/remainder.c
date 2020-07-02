#include <stdio.h>

int main()
{
  int matchs;
  int boxs;

  scanf("%d", &matchs);
  scanf("%d", &boxs);

  printf("%d\n", matchs/boxs);
  printf("%d", matchs%boxs);

return 0;
}