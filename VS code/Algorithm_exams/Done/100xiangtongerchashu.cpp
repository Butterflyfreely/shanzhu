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
    bool same(TreeNode* left, TreeNode* right)
    {
        //该层的判断
        if (left == NULL && right != NULL)return false;
        else if (left != NULL && right == NULL)return false;
        else if (left == NULL && right == NULL)return true;
        else if (left->val != right->val)return false;

        //下一层的判断
        bool outside = same(left->left, right->right);
        bool inside = same(left->right, right->left);
        return outside && inside;

    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p, q);
    }

};

void preorderTraverse(TreeNode* root,vector<int>& vec)
{
    root->val == vec[i];
    i++;
    
}


void main()
{
    solution s1;
    s1.isSameTree("3, 4, 5, 1, 2","4, 1, 2");



	system("pause");
}