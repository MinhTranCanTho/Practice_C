#include <iostream>
#include <cstdlib>

using namespace std;

void Swap_function(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	a = 5;
	b = 6;
	cout << " Before using swap function" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	Swap_function(&a, &b);
	cout << " After using swap function" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}