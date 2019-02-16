#include <iostream>
#include <algorithm>
using namespace std;
int N,M;


int main(int argc, char const *argv[]) {
  cin >> N >> M ;

  int answer[M];
  for (int i = 0; i < M; i++){
    answer[i] = 0;
  }
  int k;
  cin >> k;
  //the first person
  for (int i = 0; i < k; i++){
    int a;
    cin >> a;
    answer[a-1] = 1;
  }

  if ( N == 1){
    int ans = 0;
    for (int i = 0; i < M; i++){
      if (answer[i] == 1) ans++;

    }
    cout << ans << endl;
  }

  else{
  for (int i = 1; i < N; i++){
    int K;
    cin >> K;
    int array[M];
    for (int j = 0; j < K; j++){
      int a;
      cin >> a;
      array[a-1] = 1;
    }
    for (int num=0; num < M; num++){
      if (answer[num] == 1 && array[num] != 1){
        answer[num] = 0;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < M; i++){
    if (answer[i] == 1) ans++;

  }
  cout << ans << endl;
}
  return 0;
}
