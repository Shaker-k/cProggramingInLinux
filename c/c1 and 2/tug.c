#include <stdio.h>
int main(){

  int player1, player2, team1=0 , team2=0 , teamTotal;
  int i;

printf("Hello enter the number of players in each team\n");
  scanf("%d", &teamTotal);

printf("Enter the weight of each player one by one for each team:\n");

  for(i=0; i<teamTotal;i++){
    scanf("%d", &player1);
    team1 = player1 + team1;
    scanf("%d", &player2);
    team2 = player2 + team2;
  } 
  if(team1==team2){
    printf("ITS A TIE\n");
  }else{
    if(team1>team2){
      printf("Team 1 has an advantage\n");
      }else{
      printf("Team 2 has an advantage\n");
      }
    }  
  printf("Total weight for team 1: %d\n", team1);
  printf("Total weight for team 2: %d\n", team2);


return 0;
}