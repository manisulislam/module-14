#include<stdio.h>


// function syntax
// return-type name(parameter){
    //code
    //return
//}

int sum(int x, int y){
    int sum= x+y;
    return sum;
}
int main(){
    int s= sum(20,40);
    printf("%d", s);
          
  return 0;
}
