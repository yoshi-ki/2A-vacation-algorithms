#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  string s;
  cin >> n >> s;
  int count = 0;
  for (int i=0; i<n; i++){
    if(s[i]=='R')count++;
  }
  if(count>(n-count))cout<<"Yes"<<endl;
  else cout <<"No"<<endl;
  return 0;
}
