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

//class solution
//{
//public:
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
//    {
//        return build(inorder, 0, inorder.size()-1, postorder, 0, postorder.size() - 1);
//    }
//
//    TreeNode* build(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int postStart, int postEnd)
//    {
//        if (postStart > postEnd)return nullptr;
//
//        int rootVal = postorder[postEnd];
//
//        int index = 0;
//
//        for (int i = 0; i < inorder.size() - 1; i++)
//        {
//            if (inorder[i] == rootVal)
//            {
//                index = i;
//                break;
//            }
//        }
//
//        int leftsize = index - inStart;
//        TreeNode* root = new TreeNode(rootVal);
//        root->left = build(inorder, inStart, index - 1, postorder, postStart,postStart+leftsize-1);
//        root->right = build(inorder, index + 1, inEnd, postorder, postStart+leftsize, postEnd - 1);
//        return root;
//    }
// };
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }

    TreeNode* build(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int postStart, int postEnd)
    {
        if (postStart > postEnd)return nullptr;

        int rootVal = postorder[postEnd];

        int index = 0;
        for (int i = inStart; i <= inEnd; i++)
        {
            if (rootVal == inorder[i])
            {
                index = i;
                break;
            }
        }

        int leftsize = index - inStart;
        TreeNode* root = new TreeNode(rootVal);
        root->left = build(inorder, inStart, index - 1, postorder, postStart, postStart + leftsize - 1);
        root->right = build(inorder, index + 1, inEnd, postorder, postStart + leftsize, postEnd - 1);
        return root;
    }
};

//void print(TreeNode* Tr)
//{
//    cout <<Tr->val << endl;
//    print(Tr->left);
//    print(Tr->right);
//}

void main()
{
    Solution s1;
   
    int a[5] = { 9,3, 15, 20, 7 };
    int b[5] = { 9,15, 7, 20, 3 };
    vector<int> inorder(a, a + 5);
    vector<int> postorder(b, b + 5);

    TreeNode* Tr=s1.buildTree(inorder, postorder);
    //print(Tr);

	system("pause");
}