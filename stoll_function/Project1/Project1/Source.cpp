#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string dec_num = "987654321";
	cout << "dec_num = " << stoll(dec_num, nullptr, 10) << endl;
	string hex_num = "FFFFFF";
	cout << "hex_num = " << stoll(hex_num, NULL, 16) << endl;
	string binary_num = "1111111";
	cout << "binary_num = " << stoll(binary_num, NULL, 2) << endl;

	string invalid_num = "@#$123";
	try
	{
		cout << stoll(invalid_num, NULL, 10);
	}
	catch (invalid_argument)
	{
		cout << "Invalid argument" << endl;
	}

	return 0;

}