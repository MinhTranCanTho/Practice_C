#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int Code[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
        string str_code[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        string str;
        for (int i = 0; i < 13; i++)
        {
            while (num >= Code[i])
            {
                str.append(str_code[i]);
                num -= Code[i];
            }
        }
        return str;
    }
};

int main()
{
    Solution p;
    string str = p.intToRoman(9);
    cout << str << endl;
	return 0;
}