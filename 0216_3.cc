#include <iostream>
#include <algorithm>
using namespace std;
int N;

int main(int argc, char const *argv[]) {
  cin >> N;
  int monster[N];
  for (int i = 0; i < N; i++){
    cin >> monster[i];
  }


  while(1){
  sort(monster,monster+N);

  if(monster[N-2] == 0) break;

  int hoge = 0;
  while(1){
    if(monster[hoge] != 0) break;
    hoge++;
  }

  for (int j = hoge + 1; j < N; j++){
    monster[j] = monster[j] % monster[hoge];

  }
  }


  cout << monster[N-1] << endl;
  return 0;
}
