//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1129&lang=jp

#include <iostream>
#include <algorithm>
using namespace std;
int n,r,p,c;

int main(){
  while (cin >> n >> r && n){
    int A[n];
    for (int i=0; i<n; i++){
      A[i] = n-i;
    }
    for (int i=0; i<r; i++){
      cin >> p >> c;
      rotate(A,A+p-1,A+p+c-1);
    }
    cout << A[0] << endl;
  }
  return 0;
}
