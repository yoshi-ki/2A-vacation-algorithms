#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int max2(int a,int b){
  if(a>b) return a;
  else return b;
}

int main(int argc, char const *argv[]) {
  int N,Q;
  string s;//この長さはN
  cin >> N >> Q >> s;
  char l[200010];
  char r[200010];
  char ar[200010];
  int lc=0;
  int rc=0;
  //入力
  for(int i=0;i<Q;i++){
    char a,b;
    cin >> a >> b;
    ar[i]=b;
    if(b=='L'){
      l[lc]=a;
      lc++;
    }
    else{
      r[rc]=a;
      rc++;
    }
  }
  //実装時に戻るやつは戻らせる
  for(int j=0;j<Q;j++){

    int countleft=0;
    for(int i=lc-1;i>=0;i--){
      if(s[countleft]==l[i]){
        countleft++;
      }
    }

    int countright=0;
    for(int i=rc-1;i>=0;i--){
      if(s[N-1-countright]==r[i]){
        countright++;
      }
    }
  }
  cout << max2(0,N-countright-countleft)<<endl;

  return 0;
}
