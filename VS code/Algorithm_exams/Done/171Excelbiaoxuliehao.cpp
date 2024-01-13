#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;




class solution
{
public:
    int titleToNumber(string columnTitle) {

        int result = columnTitle[0] - 'A' + 1;
        if (columnTitle.size() == 1)return result;

        for (int i = 0; i < columnTitle.size() - 1; i++)
        {
            int kk = columnTitle[i + 1] - 'A';
            result += 26 * result + kk;
        }

        return result;

    }
};


void main()
{
    solution s1;
    string AA = "AB";
    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);
    s1.titleToNumber(AA);

    system("pause");
}