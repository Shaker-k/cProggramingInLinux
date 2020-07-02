#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int * array, int players){
  int i=0, highScore=0;

  for (i=0; i<players; i++){
    if(array[i] > highScore){
      highScore = array[i];
    }
  }
  for (i=0; i<players; i++){
    *(array+i) = highScore - *(array+i);
  }
}