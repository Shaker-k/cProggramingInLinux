#include <stdio.h>
int main(){
  int list[]={-10, -3, 2, 5, 8, 14, 77, 106, 759, 900};//sorted list
  int n = 10;
  int item;
  int ia, ib, mid, found;

  printf("Enter a number: ");
  scanf("%d", &item);
  ia=0;
  ib=n-1;
  found=0;

  while(!found && (ia<=ib)){
    mid = (ia+ib)/2; // middle index.
    if(item ==  list[mid]){
      found=1; //found item
    }else if(item<list[mid]){
      ib = mid-1; //toss the top half
    }else {
      ia = mid+1; // toss the bottom half
    }
  }
if (!found){
  printf("number %d not found in array\n", item);
  }else{
    printf("number %d was found at index %d in array\n", item, mid);
  }

}