#include <iostream>
using namespace std;

int main(){
  int mult = 1;

  for (int  i = 1; i <= 5; i++) {
    mult = mult * i;
  }

  cout << mult;
  return 0;
}