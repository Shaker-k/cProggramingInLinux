#include <stdio.h>

//Write your function prototype here
void newAGE(int *age);
int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
  newAGE(&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void newAGE(int *age){
  if(*age >20){
    *age = *age - 10;
  }else{
    *age = *age * 2;
}
}