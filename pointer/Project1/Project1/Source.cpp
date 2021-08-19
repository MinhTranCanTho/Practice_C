#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int arr[3] = { 0,1,2 };
	int* ptr;
	ptr = arr;

	for (int i = 0; i < 3; i++) {
		cout << "Value of *ptr: " << *ptr << endl;
		cout << "Value of ptr: " << ptr << endl;
		ptr++;
	}

	return 0;
}