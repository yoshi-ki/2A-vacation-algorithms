//https://atcoder.jp/contests/abc121/tasks/abc121_c
#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
// #include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  long long N,M;
  cin>>N>>M;
  pair<long long,long long> drink[100100];
  for (int i=0;i<N;i++){
    long long a,b;
    cin >> a >> b;
    drink[i].first = a;
    drink[i].second = b;
  }
  sort(drink,drink+N);

  long long cost = 0;
  int count = 0;

  while(1){
    if(drink[count].second<M){
      cost+= drink[count].first*drink[count].second;
      M -= drink[count].second;
    }
    else{
      cost+=drink[count].first*M;
      break;
    }
    count++;
  }
  cout << cost<<endl;
  return 0;
}
