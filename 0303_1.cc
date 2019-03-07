//https://atcoder.jp/contests/abc120/tasks/abc120_a
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int A ,B, C;
int max(int a, int b){
  if(a > b) return a;
  else return b;
}

int main(int argc, char const *argv[]) {
  cin >> A >> B >> C;
  int ans = 0;
  while(A<=B){
    B = B - A;
    ans++;
  }

  if (ans <= C) cout << ans << endl;
  else cout << C << endl;


  return 0;
}
