//problem: https://atcoder.jp/contests/abc119/tasks/abc119_c
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int N, A, B, C;
int l[100];
int INF = 10000;

int min (int a, int b){
  if (a>b) return b;
  else return a;
}


int dfs(int cur, int a, int b, int c){
  if (cur == N){
    if(a==0||b==0||c==0) return INF;
    else return abs(a-A) + abs(b-B) + abs(c-C) - 30;
  }
  int ret0 = dfs(cur+1,a,b,c);
  int ret1 = dfs(cur+1,a+l[cur],b,c) + 10;
  int ret2 = dfs(cur+1,a,b+l[cur],c) + 10;
  int ret3 = dfs(cur+1,a,b,c+l[cur]) + 10;
  return min(min (ret0,ret1),min(ret2,ret3));
}

int main(int argc, char const *argv[]) {
  cin >> N >> A >> B >> C;
  for ( int i = 0; i<N ; i++){
    cin >> l[i];
  }


  cout << dfs(0,0,0,0) << endl;
  return 0;
}
