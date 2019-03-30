//https://atcoder.jp/contests/abc121/tasks/abc121_d
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

long judge(long n){
  if(n%2==0){
    if(n%4==0){
      return n;
    }
    else{
      return n^1;
    }
  }
  else{
    if((n+1)%4==0){
      return 0;
    }
    else{
      return 1;
    }
  }
}

int main(int argc, char const *argv[]) {
  long A,B;
  cin >> A >> B;

  long a = judge(A-1)^judge(B);
  cout << a << endl;

  return 0;
}
