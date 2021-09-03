#include <iostream>
#include <cstdlib>

using namespace std;

class Solution
{
public:
	int reserve(int x)
	{
		int result = 0;
		while(x!=0) //123
		{
			int num = x % 10;
			x /= 10;
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && num > 7)) return 0;
			if (result < INT_MIN / 10 || (result == INT_MIN / 10 && num < -8)) return 0;
			result = result * 10 + num;
		}
	}
};

int main()
{
	Solution p;
	int result = p.reserve(123);
	cout << result << endl;
	return 0;
}