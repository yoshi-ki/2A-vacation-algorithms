//https://atcoder.jp/contests/abc121/tasks/abc121_a
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  int H,W,h,w;
  cin >> H >> W >> h >> w;
  cout << H*W-h*W-w*H+h*w << endl;
  return 0;
}
