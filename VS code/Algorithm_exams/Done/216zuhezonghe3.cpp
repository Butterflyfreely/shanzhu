#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include "string.h"
using namespace std;



class solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void reversal(int n, int k, int startIndex)
    {
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <= n; i++)
        {
            path.push_back(i);
            reversal(n, k, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        result.clear();
        path.clear();
        reversal(n, k, 1);
        return result;
    }

};


void main()
{
    solution s1;
    s1.combine(4,2);


    system("pause");
}