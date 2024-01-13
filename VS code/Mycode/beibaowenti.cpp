#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;

class solution
{
public:


};

void test()
{
    vector<int> val={15,20,35};
    vector<int> weight={1,3,4};
    int bagweight = 4;

    vector<vector<int>> dp(weight.size(), vector<int>(bagweight + 1, 0));

    //初始化
    for (int j = weight[0]; j <= bagweight; j++)
    {
        dp[0][j] = val[0];
    }

    for (int i = 1; i < weight.size(); i++)//遍历物品
    {
        for (int j = 0; j <= bagweight; j++)//遍历 背包容量
        {
            if (j < weight[i])dp[i][j] = dp[i - 1][j];
            else
            {
                cout << j<<"  " <<weight[i] <<"  "<< j - weight[i] << endl;
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + val[i]);

            }  
            
     
        }
    }

    //cout << dp[weight.size() - 1][bagweight] << endl;
}

void main()
{
    solution s1;

    test();

    system("pause");
}

