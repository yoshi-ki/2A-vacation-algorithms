//https://atcoder.jp/contests/abc120/tasks/abc120_b
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int A,B,K;
int min(int a, int b){
  if(a < b) return a;
  else return b;
}

int main(int argc, char const *argv[]) {
  int ans;
  cin >> A >> B >> K;
  int count = 0;
  for (int i = min(A,B)+1; i >0 ; i--){
    if(A%i == 0){
      if(B%i == 0){
        count++;
      }
    }
    if(count == K) {ans = i; break;}
  }
  cout << ans << endl;

  return 0;
}
