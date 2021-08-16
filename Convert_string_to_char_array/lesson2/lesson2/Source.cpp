#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	string s = "trancongminh";
	const char* ptr = s.c_str();
	for (int i = 0; i < s.length(); i++) {
		if (i < s.length() - 1) {
			cout << ptr[i] << ", ";
		}
		else
			cout << ptr[i];
	}
	cout << endl;
	return 0;
}