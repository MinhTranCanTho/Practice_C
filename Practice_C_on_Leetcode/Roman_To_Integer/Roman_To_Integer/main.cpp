#include <iostream>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        string Code_Str[] = { "CM","CD", "XC", "XL", "IX", "IV"};
        char Code_ch[] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        int Code_num_str[] = { 900,400,90,40,9,4};
        int Code_num_ch[] = { 1000, 500 , 100 , 50 , 10 , 5 , 1 };
        int length = s.length();
        int result = 0;
        string str;
        for (int i = 0; i < length; i++)
        {
            if (((s[i] == 'C') && ((s[i + 1] == 'M') || (s[i + 1] == 'D'))) || ((s[i] == 'X') && ((s[i + 1] == 'C') || (s[i + 1] == 'L'))) || ((s[i] == 'I') && ((s[i + 1] == 'X') || (s[i + 1] == 'V'))))
            {
                str = s.substr(i, 2);
                i += 1;
                for (int j = 0; j < 6; j++)
                {
                    if (str == Code_Str[j])
                        result += Code_num_str[j];
                }
            }
            else
            {
                for (int j = 0; j < 7; j++)
                {
                    if (s[i] == Code_ch[j])
                        result += Code_num_ch[j];
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution p;
    int result = p.romanToInt("DCXXI");
    cout << result << endl;
	return 0;
}