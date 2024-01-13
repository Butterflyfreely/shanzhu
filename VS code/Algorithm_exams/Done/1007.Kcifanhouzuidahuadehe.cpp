#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;

class solution
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                nums[i] = -nums[i];
                n++;
                if (n == k)
                {

                    for (int i = 0; i <= nums.size() - 1; i++)
                    {
                        sum += nums[i];
                    }
                    cout<<sum;
                }
            }
            else
            {
                int m = (k - n) % 2;
                if (m == 1)nums[i] = -nums[i];
                for (int i = 0; i <= nums.size() - 1; i++)
                {
                    sum += nums[i];
                }
                cout<<sum;
            }
        }
        return sum;
    }

};


void main()
{
    vector<int> nums = { -8,3,-5,-3,-5,-2 };
    solution s1;
    s1.largestSumAfterKNegations(nums, 6);

    system("pause");
}