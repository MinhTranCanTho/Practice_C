#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Reverse_string(string str) {
	for (int i = str.length() - 1; i >= 0; i--) {
		cout << str[i];
	}
}

int main() {
	string s = "trancongminh";
	Reverse_string(s);
	return 0;
}