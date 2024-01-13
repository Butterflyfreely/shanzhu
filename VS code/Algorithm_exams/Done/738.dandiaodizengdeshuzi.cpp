#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<string>
using namespace std;


class solution
{
public:
    void monotoneIncreasingDigits(int n)
    {
        string str = to_string(n);

    }

};


void main()
{
    solution s1;

    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);
    s1.monotoneIncreasingDigits(10);

    system("pause");
}