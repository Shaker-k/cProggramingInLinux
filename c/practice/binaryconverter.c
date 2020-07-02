#include <stdio.h>
int main(){

  long int binary=0;
  long int decimal=0;
  long int y=1;
  printf("Enter a Binary number: ");
  scanf("%d", &binary);

  while(binary != 0){
    decimal = decimal + ( binary%10 * y);
    binary = binary / 10;
    y = y * 2;
  }
  printf("%d\n", decimal); //decimal
  printf("%o\n", decimal); //octal 8base
  printf("%x\n", decimal); //hexa decimal with small letters.
  printf("%X\n", decimal); //hexa decimal with CAPITAL letters.


return 0;
}