//https://atcoder.jp/contests/abc117/tasks/abc117_b
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  int L[15];
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> L[i];
  }
  sort(L,L+N);
  int c = 0;
  for(int i=0;i<N-1;i++){
    c+=L[i];
  }
  if(L[N-1]<c) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
