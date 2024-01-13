#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


class solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<vector<int>>& nums, int startIndex, vector<int>& used)
    {
        if (path.size() >= 2)
        {
            result.push_back(path);
        }

        for (int i = startIndex; i < nums.size(); i++)
        {
            if (nums[i] > path::rbegin())
            {
                path.push_back(nums[i]);
            }
            else
            {
                continue;
            }
            used[i] = true;
            backtracking(nums, i + 1, used);
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> used(nums.size(), false);
        backtracking(nums, 0, used);
        return result;
    }

};


void main()
{
    solution s1;
    vector<int> nums = { 4,6,7,7 };
    s1.findSubsequences(nums);


    system("pause");
}


