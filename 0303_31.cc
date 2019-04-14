#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  
  cin >> a // 数字列
  vector<int> nums(str.size()); // 同じ長さのint列

  // char -> int 変換
  transform(str.begin(), str.end(), nums.begin(), [](char ch) { return ch - '0';});

  // 確認
  for ( int item : nums ) cout << item << ' ';
  return 0;
}
