#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result = 0;
        vector<int> nums3;
        // Merge the first array into third array
        for (int i = 0; i < nums1.size(); i++)
        {
            nums3.push_back(nums1[i]);
        }
        //Merge the second array into third array
        for (int i = 0; i < nums2.size(); i++)
        {
            nums3.push_back(nums2[i]);
        }
        // Arrange elements in third array
        int temp = 0;
        for (int i = 0; i < nums3.size(); i++)
        {
            for (int j = i + 1; j < nums3.size(); j++)
            {
                if (nums3[i] > nums3[j])
                {
                    temp = nums3[i];
                    nums3[i] = nums3[j];
                    nums3[j] = temp;
                }
            }
        }
        int length = nums3.size();
        int count = 0;
        switch (length)
        {
        case 0:
            result = 0;
            break;
        case 1:
            result = double(nums3[0]) / length;
            break;
        case 2:
            result = (double(nums3[0]) + double(nums3[1])) / length;
            break;
        default:
            if (length % 2 != 0)
            {
                int i = (length - (length / 2) - 1);
                result = nums3[i];
            }
            else
            {
                for (int i = (length - (length / 2) - 1); i <= (length - (length / 2)); i++)
                {
                    result += nums3[i];
                    count++;
                }
                result /= count;
            }
            break;
        }
        return result;
    }
};

int main()
{
    Solution p;
    vector<int> num1 = { 1,3 };
    vector<int> num2 = { 3,4 };
    double result = p.findMedianSortedArrays(num1, num2);
    cout << result << endl;
    return 0;
}