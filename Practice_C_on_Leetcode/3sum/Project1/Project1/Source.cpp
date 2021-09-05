#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> num;
        int cnt = 0;
        int cnt_1 = 0;
        int pos;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        int a = nums[i];
                        int b = nums[j];
                        int c = nums[k];
                        while((a>b) ||(a>c) || (b>c))
                        {
                            int temp = 0;
                            if(a>b)
                            {
                                temp = a;
                                a = b;
                                b = temp;
                            }
                            else if(a>c)
                            {
                                temp = a;
                                a = c;
                                c = temp;
                            }
                            else if(b>c)
                            {
                                temp = b;
                                b = c;
                                c = temp;
                            }
                        }
                        num.push_back({a,b,c});
                    }
                }
            }
        }
        for(int i=0;i<num.size();i++)
        {
            for(int j=i+1;j<num.size();j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(num[i][k] == num[j][k])
                    {
                        cnt_1++;
                        if (cnt_1 == 3) pos = j;
                    }
                    else
                    {
                        cnt_1--;
                        if (cnt_1 < 0)
                            cnt_1 = 0;
                    }
                }
            }
            vector<int> temp;
            if(cnt_1 == 3)
            {
                temp = num[pos];
                temp.clear();
                num[pos] = temp;
            }
        }
        return num;
    }
};
int main()
{
    Solution p;
    vector<int> num = {-1,0,1,2,-1,-4};
    vector<vector<int>> result;
    result = p.threeSum(num);
    cout << result[2][0] << ", " << result[2][1] << ", " << result[2][2] << endl;
	return 0;
}