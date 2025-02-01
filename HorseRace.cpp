#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void advance(int hn, int* horses){
  if (rand() % 2 == 1) {
    horses[hn]++;
    }
}

void printLine(int hn, int* horses){
}

bool isWinner(int hn, int* horses){

  return 0;
}

int main(){
  int horses[5] = {0, 0, 0, 0, 0};
  bool keepgoing = true;

  while (keepgoing) {

    for (int i = 0; i < 5; i++){
        advance(i, horses);
      }
   }
  return 0;
}
