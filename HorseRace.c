#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char track_Length[15];
char horses[5];

void advance(int horseNum, int* horses){
  for (int i = 0; i != horses; i++){
      srand(time(NULL));
      int coin = rand() % 2;
      printf("%d\n", coin); 
    }
}

int main(){
  srand(time(NULL));
  int coin = rand() % 2;
  printf("%d\n", coin);
  advance();
 }
