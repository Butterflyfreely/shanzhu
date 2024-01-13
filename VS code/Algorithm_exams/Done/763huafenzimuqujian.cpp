#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;



class solution
{
public:
    
    void partitionLabels(string S)
    {

        int hash[27] = { 0 }; // i为字符，hash[i]为字符出现的最后位置
        for (int i = 0; i < S.size(); i++) { // 统计每一个字符最后出现的位置
            hash[S[i] - 'a'] = i;
        }
    }


};


void main()
{
    solution s1;
    string S = "ababcbacadefegdehijhklij";
    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);

    s1.partitionLabels(S);
    

    system("pause");
}