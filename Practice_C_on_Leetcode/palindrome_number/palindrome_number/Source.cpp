#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x;
        // reserve number
        long result = 0;
        while (x != 0)
        {
            if (x > 0) {
                if (x > INT_MAX) return false;
                if (x < INT_MIN) return false;
                int pov = x % 10;
                x = x / 10;
                result = result * 10 + pov;
            }
            else
            {
                return false;
            }
        }
        if (temp == result) return true;
        else
            return false;
    }
};

int main()
{
    Solution p;
    bool result = p.isPalindrome(121);
    cout << result << endl;
    return 0;
}