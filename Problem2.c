#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int before = 0;
  int tempcurrent;
  int current = 1;
  int counter = 0;
  while(current <= 4000000){
    if(current%2 == 0)
      counter += current;
    tempcurrent = current;
    current += before;
    before = tempcurrent;
  }

  printf("%d \n",counter);
  return counter;

}
