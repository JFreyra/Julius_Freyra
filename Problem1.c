#include <stdio.h>
#include <stdlib.h>

int main(){

  int iter;
  int counter = 0;
  for(iter = 0; iter < 1000; iter++){
    if(iter/3 == 1 || iter/5 == 1)
      counter += iter;
  }

  printf("%d \n",counter);
  return counter;

}
