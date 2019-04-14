//https://atcoder.jp/contests/abc007/tasks/abc007_4
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long count (long long N){
  string s = to_string(N);
  int n = s.size();
  long long dp[20][2][2]={};
  dp[0][0][0] = 1;
  //何桁めまで確定しているか、Nより小さいことが確定しているか,4と９が入っているか
  for (int i= 0;i<n;i++){
    for(int j=0;j<2;j++){
      for(int k=0;k<2;k++){
        int sar = j ? 9 : s[i] - '0';//Nより小さいことが確定して入れば、9個の数字について自由にできる
        for(int d = 0; d<=sar; d++){
            dp[i+1][j||d<sar][k||d==4||d==9] += dp[i][j][k];
        }
      }
    }
  }
  return dp[n][0][1]+dp[n][1][1];
}

int main(int argc, char const *argv[]) {
  long long A,B;
  cin >> A >> B;
  cout << count(B)-count(A-1) << endl;
  return 0;
}
