#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
	int A, B;
	cin >> A >> B;
	if (A > B) cout << A + A -1 << endl;
	else if (A < B) cout << B + B -1 << endl;
	else cout << A + B << endl;
}
