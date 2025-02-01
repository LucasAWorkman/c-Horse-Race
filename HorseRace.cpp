#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void advance(int hn, int* horses){
  if (rand() % 2 == 1) {
    horses[hn]++;
    }
}

void printLine(int hn, int* horses) {
    char track[15]; 
    for (int i = 0; i < 15; i++) {
        track[i] = '.';
    }
    track[horses[hn]] = '1' + hn;

    for (int i = 0; i < 15; i++) {
        cout << track[i];
    }
    cout << endl; 
}

bool isWinner(int* horses){
   for (int i = 0; i < 5; i++) {
     if (horses[i] == 14) {
         cout << "Horse " << i + 1 << " wins!" << endl;
         return true;
      }
  }
    return false;
}

int main(){
  srand(time(0));
  int horses[5] = {0, 0, 0, 0, 0};
  bool keepgoing = true;

  while (keepgoing) {

    for (int i = 0; i < 5; i++){
        advance(i, horses);
      }
      for (int i = 0; i < 5; i++) {
         printLine(i, horses); 
       }

    if (isWinner(horses)){
       keepgoing = false;
     }

    cin.get();
   }
  return 0;
}
