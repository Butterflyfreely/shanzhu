#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};



class solution
{ 
public:
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty())return NULL;

        auto index = max_element(nums.begin(), nums.end());

        vector<int> leftpart(nums.begin(), index);
        vector<int> rightpart(index + 1, nums.end());

        //构造一个根
        TreeNode* root = new TreeNode(*index);

        root->left = constructMaximumBinaryTree(leftpart);
        root->right = constructMaximumBinaryTree(rightpart);        
        return root;

    }

};

void print(TreeNode* root)
{
    cout << root->val << endl;
    print(root->left);
    print(root->right);
}


void main()
{
    solution s1;

    int a[6] = { 3,2,1,6,0,5 };
    vector<int> root(a, a + 6);
    TreeNode* node = s1.constructMaximumBinaryTree(root);
    print(node);

    system("pause");
}