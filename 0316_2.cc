//https://atcoder.jp/contests/agc031/tasks/agc031_b
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int x[200010],sum[20010],dp[20010];

int main(int argc, char const *argv[]) {
  int N;
  cin >> N;
  for (i=0;i<N;i++){
    sum[i]=-1;
  }
  dp[0]=1;
  for(int i=0; i<N; i++){
    cin >> x[i];
    if(sum[x[i]-1]>=0 && i-sum[x[i]-1]>1){
      dp[i]+= dp[sum[x[i]-1]];
    }
  }
  cout << dp[n-1]%=(1e9 + 7) << endl;
  return 0;
}
