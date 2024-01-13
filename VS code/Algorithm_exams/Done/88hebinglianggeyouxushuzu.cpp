#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;



class solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i != n; ++i) {
            nums1[m + i] = nums2[i];
        }
         sort(nums1.begin(), nums1.end());
    }
};


void main()
{
    solution s1;

    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);


    vector<int> aa = { 1,2,3,0,0,0 };
    vector<int> bb = { 2,5,6 };
    s1.merge(aa,3, bb,3);

    system("pause");
}