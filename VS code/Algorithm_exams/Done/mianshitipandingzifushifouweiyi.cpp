#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;



class solution
{
public:
    unordered_map<char, int> map;
    bool isUnique(string astr) {
        
        int n = astr.size();
        for (int i = 0; i < n; i++)
        {
            map[astr[i]]++;
        }

        for (char a : map)
        {
            if (map[a] > 1)return false;
        }
        return true;
    }
};


void main()
{
    solution s1;

    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);


    system("pause");
}


