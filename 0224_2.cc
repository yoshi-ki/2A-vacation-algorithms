//problem: https://atcoder.jp/contests/abc119/tasks/abc119_b
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int N;
float money = 0;

int main(int argc, char const *argv[]) {
  cin >> N;
  for (int i=0; i < N; i++){
    float value;
    string coin;
    cin >> value >> coin;
    if(coin == "JPY"){
      money = money + value;
    }
    else{
      money = money + value * 380000.0;
    }

  }


  return 0;
}
