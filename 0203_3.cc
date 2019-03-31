//https://atcoder.jp/contests/abc117/tasks/abc117_c
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,M;
  cin >> N>>M;
  int L[100100];
  for(int i=0;i<M;i++){
    cin >>L[i];
  }
  sort(L,L+M);
  int dis[100100];
  for(int i=0;i<M-1;i++){
    dis[i]=L[i+1]-L[i];
  }
  sort(dis,dis+M-1);
  int n=0;
  if(M-N>0){
    for(int i=0;i<M-N;i++){
      n+=dis[i];
    }
    cout << n << endl;
  }
  else cout << 0 << endl;

  return 0;
}
