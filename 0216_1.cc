#include <iostream>
#include <algorithm>
using namespace std;
int A,B;

int main(int argc, char const *argv[]) {
  cin >> A >> B ;
  if (B % A == 0){
    cout << A+B << endl;
  }
  else {cout << B-A << endl;}

  return 0;
}
