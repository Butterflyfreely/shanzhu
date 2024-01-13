#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


class solution
{
public:
    vector<vector<string>> result;
    vector<string> path;
    void backtrancking(string s, int startIndex)
    {
        if (startIndex >= s.size())
        {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <= s.size(); i++)
        {
            if (isppp(s, startIndex, i))
            {
                path.push_back(s.substr(startIndex, i - startIndex + 1));
            }
            else
            {
                continue;
            }
            backtrancking(s, i + 1);
            path.pop_back();
        }
    }


    //判断是否为回文字符串
    bool isppp(string s, int start, int end)
    {
        for (int i = start, j = end; i <= j; i++, j--)
        {
            if (s[i] != s[j])return false;
        }
        return true;
    }


    vector<vector<string>> partition(string s) {
        //先遍历组合出所有可能的情况
        if (s.size() == 0)return result;
        backtrancking(s, 0);
        return result;
    }

};


void main()
{
    solution s1;


    system("pause");
}