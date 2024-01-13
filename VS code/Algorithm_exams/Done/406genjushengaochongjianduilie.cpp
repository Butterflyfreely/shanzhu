#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;




class solution
{
public:
    static bool cmp(const vector<int>& a, const vector<int>& b)
    {
        if (a[0] == b[0])return a[1] < b[1];
        return a[0] > b[0];
    }

    //
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        sort(people.begin(), people.end(), cmp);

        return people;
    }
};


void main()
{
    solution s1;

    vector<vector<int>> a = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    s1.reconstructQueue(a);


    system("pause");
}