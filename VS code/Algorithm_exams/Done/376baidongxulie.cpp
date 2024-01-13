#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


class solution
{
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1)return nums.size();
        int curdiff = 0;
        int prediff = 0;
        int result = 1;

        for (int i = 0; i < nums.size()-1; i++)
        {
            curdiff = nums[i + 1] - nums[i];
            if (curdiff < 0 && prediff>=0 || curdiff > 0 && prediff <= 0)
            {
                result++;
                prediff = curdiff;
            }
        }
        return result;
    }

};


void main()
{
    solution s1;
    vector<int> nums = {1,7,4,9,2,5};
    int n=s1.wiggleMaxLength(nums);



    system("pause");
}