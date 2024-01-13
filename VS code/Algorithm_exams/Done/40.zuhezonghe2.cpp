#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;

class solution
{
public:
    vector<vector<int>> result;
    vector<int> group;
    int sum = 0;

    void backtracking(vector<int>& candidates, int target, int startIndex, vector<bool>& used)
    {
        if (sum == target)
        {
            result.push_back(group);
            return;
        }
        else if (sum > target)
        {
            return;
        }

        for (int i = startIndex; i < candidates.size(); i++)
        {
            if (i > 0 && candidates[i] ==candidates[i - 1] && used[i - 1] == false)
            {
                continue;
            }
            sum += candidates[i];
            group.push_back(candidates[i]);
            used[i] = true;
            backtracking(candidates, target,i + 1, used); // 和39.组合总和的区别1，这里是i+1，每个数字在每个组合中只能使用一次
            used[i] = false;
            sum -= candidates[i];
            group.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool> used(candidates.size(), false);
        result.clear();
        group.clear();
        //sort(candidates);
        sort(candidates.begin(), candidates.end());
        if (candidates.size() == 0)return result;
        backtracking(candidates, target, 0, used);
        return result;
    }

    void print()
    {
        cout << "{" ;
        for (vector<int>  iter : result)
        {
            cout << "[" ;
            for (int  it : iter)
            {
                cout << it << "," ;
            }
            cout << "]" <<"," ;
        }
        cout << "}" << endl;
    }
};


void main()
{
    solution s1;
    vector<int> candidates = { 10, 1, 2, 7, 6, 1, 5 };
    s1.combinationSum2(candidates, 8);
    s1.print();
    
    system("pause");
}