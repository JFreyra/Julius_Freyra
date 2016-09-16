#include <stdio.h>

int main(){

  short iter;
  short counter = 0;
  for(iter = 0; iter < 4; iter++){
    if(iter/3 == 0 || iter/5 == 0)
      counter = counter + iter;
  }

  printf("%ld \n",counter);
  return counter;

}
