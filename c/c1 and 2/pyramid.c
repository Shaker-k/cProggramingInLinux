#include <stdio.h>

int main()
{
  char string1;
  int i = 0;
  int j = 0;

  printf("Enter a builing block for ur pyramid: ");
  scanf("%c", &string1);

    for(i=0;i<10;i++)
    {
      for(j=0;j<i;j++)
      {
        printf("%c", string1);

      }
    printf("\n");
    }

  //printf("your letter is: %c\n", string1);

  return 0;

}