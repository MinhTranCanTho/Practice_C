#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i = 0;
        int temp = 0;
        int cnt = 0;
        int result = 0;
        int min_distance = 1E+5;
        vector<int> num;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    temp = (nums[i] + nums[j] + nums[k]);
                    num.push_back(temp);
                }
            }
        }
        int distance = 0;
        distance = abs(temp - target);
        if (distance < min_distance)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if ((i + 1) < nums.size())
                {
                    if ((nums[i] == 0) && (nums[i + 1] == 0) && (i + 1 < nums.size()))
                        cnt = 1;
                    else
                        cnt = 0;
                }
            }
            if (cnt == 1) return 0;
            vector<int> pos_num;
            vector<int> neg_num;
            int temp_1 = 0;
            for (int i = 0; i < num.size(); i++)
            {
                for (int j = i + 1; j < num.size(); j++)
                {
                    if ((num[i] >= num[j]))
                    {
                        temp_1 = num[i];
                        num[i] = num[j];
                        num[j] = temp_1;
                    }
                }
            }
            temp_1 = 0;
            for (int i = 0; i < num.size(); i++)
            {
                if (target >= num[num.size() - 1])
                    return num[num.size() - 1];
                else if (target <= num[0])
                    return num[0];
                else
                {
                    if (target - num[i] > 0)
                    {
                        pos_num.push_back(target - num[i]);
                    }
                    else
                    {
                        neg_num.push_back(target - num[i]);
                    }
                }
            }
            for (int i = 0; i < pos_num.size(); i++)
            {
                for (int j = i + 1; j < pos_num.size(); j++)
                {
                    if ((pos_num[i] >= pos_num[j]))
                    {
                        temp_1 = pos_num[i];
                        pos_num[i] = pos_num[j];
                        pos_num[j] = temp_1;
                    }
                }
                if ((target == 0) && (pos_num[i] == 0))
                    return target;
            }
            for (int i = 0; i < neg_num.size(); i++)
            {
                for (int j = i + 1; j < neg_num.size(); j++)
                {
                    if ((neg_num[i] >= neg_num[j]))
                    {
                        temp_1 = neg_num[i];
                        neg_num[i] = neg_num[j];
                        neg_num[j] = temp_1;
                    }
                }
                if ((target == 0)&& (neg_num[i]==0))
                    return target;
            } 
            if (target <0)
            {
                result = target - pos_num[0];
            }
            else
            {
                result = target - neg_num[0];
            }
        }
        return result;
    }
};

int main()
{
    Solution p;
    int result = 0;
    vector<int> num = {0,2,1,-3};
    //vector<int>num = {-1,2,1,-4};
    result = p.threeSumClosest(num, 1);
    cout << result << endl;
	return 0;
}