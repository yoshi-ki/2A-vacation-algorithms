#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int min2(int a,int b){
		if(a < b) return a;
		else return b;}

int main(int argc, char const *argv[]) {
	string S;
	cin >> S;
	int count0 = 0;
	int count1 = 0;
	for (int i=0; i<S.length();i=i+2){
		if(S[i]=='1') count1++;
	}
	for (int i=1;i<S.length();i=i+2){
		if(S[i]=='0') count0++;
	}
	int count = count0+count1;
	cout << min2(count, S.length()-count)<<endl;
	
}

