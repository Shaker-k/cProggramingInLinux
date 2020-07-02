#include <stdio.h>
  int
  Megabyte = 1000000, Kilobyte = 1000,
  B, KB, MB, space;
  char
  decimal = 'd', integer = 'i', shortx = 's', character = 'c';
//////////////////////////////////////////////////////////////////
  int inputNum;
  char inputChar;

int memoryOfInput(int);
int dataTypeOfinput(char);
//////////////////////////////////////////////////////////////////
int main(void){
  
  scanf("%c %d", &inputChar, &inputNum);

  dataTypeOfinput(inputChar);
  memoryOfInput(space);

return 0;
}





int dataTypeOfinput(char inputChar){
  if(inputChar == decimal){
    space = inputNum * sizeof(double);
  }else if(inputChar == integer){
    space = inputNum * sizeof(int);
  }else if(inputChar == shortx){
    space = inputNum * sizeof(short);
  }else if(inputNum == character){
    space = inputNum * sizeof(char);
  }
return space;
}

int memoryOfInput(int x){
  if(space >= Megabyte)
  {
    B = space % Kilobyte;
    KB = (space / Kilobyte) % Kilobyte;
    MB = space / Megabyte;
    return (printf("%d MB and %d KB and %d B\n", MB, KB, B));
  }
  else if(space < Megabyte && space >= Kilobyte)
  {
    B = space % Kilobyte;
    KB = space / Kilobyte;
    return (printf("%d KB and %d B\n", KB, B));
  }
  else{
    B = space;
    return (printf("%d B\n", B));
  }
}