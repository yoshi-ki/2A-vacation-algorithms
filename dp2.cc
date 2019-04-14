//https://atcoder.jp/contests/abc029/tasks/abc029_d
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//dp[i][j]で、iが桁数、jがNを超えているか否かで桁DP
long long count(long long N){
  string s;
  s = to_string(N);
  int n = s.size();
  long long dp[20][2] ={};
  dp[0][0] = 0
  for(int i = 0; i<N; i++){
    for (j=0;j<2;j++){
      if()
      dp[i+1][j||]+= dp[i][j];
    }
  }
}

int main(int argc, char const *argv[]) {
  long long N;
  cin >> N;
  cout << count(N) << endl;
  return 0;
}
