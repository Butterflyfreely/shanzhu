#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


class solution
{
public:
    string convertToTitle(int columnNumber) {
        int shuzi = columnNumber;
        string str = "AABCDEFGHIJKLMNOPQRSTUVWXYZ";
        vector<int> num;
        while (shuzi!= 0)
        {    
            int kk = shuzi % 26;
            num.push_back(kk);
            shuzi = (shuzi - kk) / 26;
            int temp = shuzi;
            shuzi = temp;
        }
        string result;
        for (int j = num.size() - 1; j >= 0; j--)
        {
            result.push_back(str[num[j]]);
        }
        return result;
    }
};


void main()
{
    solution s1;

    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);

    int aa = 701;
    s1.convertToTitle(aa);


    system("pause");
}




