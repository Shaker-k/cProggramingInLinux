#include <stdio.h>
int main(){
  char word[51];
  int letters[50];

  int x = 0,y = 0, i = 0, n = 0, m = 0, l = 0, a=0, b=0;

  scanf("%s", word);
    
  while (word[n] != '\0') { n++; }

  if (n%2) { i = (n / 2) + 1; }
    else { i = n / 2; }
    l = i;

  for(x=0; x<=i; x++){
    if('T' == word[m] || 't' == word[m]){
      printf("1\n");
      a++;
      break;
    }else if (m <= i){
      m++;
    }
  }
  for(y=0; y<n; y++){
    if('T' == word[l] || 't' == word[l]){
      printf("2\n");
      b++;
      break;
    } else if(l <= n){
      l++;
    }
  }
  if(a==0 && b==0){
    printf("-1\n");
  }
return 0;
}