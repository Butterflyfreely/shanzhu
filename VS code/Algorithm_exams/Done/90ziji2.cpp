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

    void backtrancking(vector<int>& nums, int startIndex, vector<bool>& used)
    {
        result.push_back(path);

        for (int i = startIndex; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false) {
                continue;
            }
            path.push_back(nums[i]);
            used[i] = true;
            backtrancking(nums, i + 1, used);
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        result.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backtrancking(nums, 0, used);
        return result;
    }
};


void main()
{
    solution s1;
    vector<int> nums = { 1, 2, 2 };
    s1.subsetsWithDup(nums);



    system("pause");
}

