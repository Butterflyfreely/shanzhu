#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


class solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m && obstacleGrid[i][0] == 0; i++)dp[i][0] = 1;
        for (int j = 0; j < n && obstacleGrid[0][j] == 0; j++)dp[0][j] = 1;

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (obstacleGrid[i][j] != 1)
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }

            }
        }

        return dp[m - 1][n - 1];
    }
};


void main()
{
    solution s1;

    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);
    vector<vector<int>> aa = { {0, 0, 0},{ 0, 1, 0},{0, 0, 0} };

    s1.uniquePathsWithObstacles(aa);

    system("pause");
}