#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long fact(int n){
  if(n==0) return 1;
  long c = 1;
  for(int i=1;i<=n;i++){
    c*=i;
  }
  return c;
}

//nは入力の数, modが法, mが割りたい数
long dfs(int* s, int n, int mod, int m){
  long ans =0;
  if(n==1) ans += m%mod;
  else{
  for(int i=0;i<n;i++){
    int an = m%s[i];
    if(an >= mod){
      int s1[n];
      for (int j=0;j<n;j++){
        //s[i]以外の配列を作成
        // if(i!=j)s1[j]=s[j];
        // else s1[j]=100010;
        s1[j]=s[j];
      }
      s1[i]=s1[n-1];
      ans += dfs(s1,n-1,mod,an);
    }
    else{
      ans+= an*fact(n-1);
    }
  }
}
  return ans;
}

int main(int argc, char const *argv[]) {
  int N,X;
  cin >> N >> X;
  int s[100010];
  for (int i=0;i<N;i++){
    cin>>s[i];
  }
  sort(s,s+N);
  int mod = s[0];
  long a = dfs(s,N,mod,X);
  int b = a%1000000007;
  cout <<b << endl;

  return 0;
}
