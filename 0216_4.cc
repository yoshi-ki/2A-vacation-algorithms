#include <iostream>
#include <algorithm>
using namespace std;
int score[9] = {2,5,5,4,5,6,3,7,6};
int N,M;

int main(int argc, char const *argv[]) {
  cin >> N >> M;
  int choice[M];
  for (int i = 0; i < M; i++){
    int num;
    cin >> num;
    choice[i] = score[num-1];
    }

    sort(choice,choice+M);
    int count;

    while(1){
      if(num % choice[0] == 0) count = num/choice[0];
      else{
          while (num > choice[0]){
            num = num - choice[0];
          }
          while (num == 0){
            for (int i = 1; i < M; i++){
              if(num % choice[i] == 0)
            }
            num + choice[i];
          }
        }
      }




  return 0;
}
