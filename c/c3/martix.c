#include <stdio.h>
int main(){
    
    char comp [68][41];
    int NUMword=0;

    for (NUMword = 0; NUMword < 68; NUMword++){
        
            scanf("%s", comp[NUMword]);
        
    } 
    for (NUMword = 67; NUMword >= 0; NUMword--){
            printf("%s ", comp[NUMword]);
    }   
    printf("\n");
return 0; 
} 