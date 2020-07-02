#include <stdio.h>
int main (void)
{
int i = 0; 
int a = 0;
int b = 8; 
int c = a * b; 
    for(i=0;i<11;i++) 
    { 
        printf("%dx%d = %d\n",a,b,c);
        a = a +1;
        c = a * b;
    }
        return(0);
}
