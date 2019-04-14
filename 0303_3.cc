#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
int min(int a, int b){
  if(a < b) return a;
  else return b;
}


int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  int count0 = 0;
  int count1 = 0;
  printf("%d",N);
  while(N > 0){
    if(N % 2 == 0){
      count0++;
      N = N/10;
    }
    else {
      count1++;
      N = (N - 1)/10;
    }

  }

  cout << "a" << endl;


  return 0;
}
