#include <stdio.h>
int main(){
  int minTemp;
  int maxTemp;
  int input;
  int finish = -999;

  scanf("%d %d", &minTemp, &maxTemp);
  scanf("%d", &input);

  while(input != -999){
    if(input>=minTemp && input<=maxTemp){
      printf("Nothing to report\n");
      scanf("%d", &input);
    }else{
      printf("Alert!\n");
      scanf("%d", &input);
    }
  }
return 0;
}