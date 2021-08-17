#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char src[20] = "forgeeks";
	char dest[20] = "geeks";
	char dest1[20] = "geeks";
	strcat(dest, src);
	cout << dest << endl;
	strncat(dest1, src, 3);
	cout << dest1 << endl;

	return 0;
}