//https://atcoder.jp/contests/abc117/tasks/abc117_d
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  long N,K;
  long x =0;
  cin >> N >> K;
  long A[100100];
  for(int i=0;i<N;i++)cin>>A[i];
  for(int i=39;i>=0;i--){
    int count =0;
    for(int j=0;j<N;j++) count +=(A[j]>>i )&1;
    if(2*count<N && (x|(1L<<i))<=K) x|=(1L<<i);
  }
  long ans = 0;
  for(int i=0;i<N;i++) ans+= x^A[i];
  cout << ans << endl;
  return 0;
}
