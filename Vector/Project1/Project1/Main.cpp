#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	vector<int> num1;
	for (int i = 1; i <= 5; i++) {
		num1.push_back(i);
	}
	cout << "Size: " << num1.size();
	cout << "\nCapacity: " << num1.capacity();
	cout << "\nMax_Size: " << num1.max_size();

	int* pos = num1.data();
	cout << "\nVector elements are ";
	for (int i = 0; i< num1.back() ; i++) {
		cout << pos[i] << " ";
	}

	num1.resize(4);
	cout << "\nSize: " << num1.size();

	if (num1.empty() != false)
		cout << "\nVector is empty";
	else
		cout << "\nVector is not empty";

	//num1.shrink_to_fit();
	cout << "\nVector elements are ";
	for (auto i = num1.begin(); i < num1.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}