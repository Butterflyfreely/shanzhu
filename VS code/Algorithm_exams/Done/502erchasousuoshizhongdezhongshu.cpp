#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
#include<unordered_map>
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
    unordered_map<int, int> map;
    void reverse(TreeNode* root)
    {
        if (root == nullptr)return;
        reverse(root->left);
        int val = root->val;
        map[val]++;
        reverse(root->right);
    }

    vector<int> findMode(TreeNode* root) {

        reverse(root);
        vector<int> res;
        res[0] = INT_MIN;
        int index = 0;
        for (auto c : map)
        {
            if (c.second > res[0])
            {
                res[0] = c.second;
                index = c.first;
            }
        }
        res[0] = index;
        return res;

    }

};


// new a tree 
TreeNode* newTree(int list, int lt, int z) {//种树
    if (z >= lt) return nullptr;
    TreeNode* t = new TreeNode(list[z]);
    t->left = newTree(list, lt, 2 * z + 1);
    t->right = newTree(list, lt, 2 * z + 2);
    return t;
}


void showBranch(TreeNode* root) {//前序遍历
    if (root == nullptr) return;
    root->val == NULL ? cout << ("x") << endl : cout << (root->val) << endl;//空节点用x表示
    showBranch(root->left);
    showBranch(root->right);
}


void main()
{
    TreeNode* root;
    int List[] = { 1,NULL,2,2 };
    int lt = sizeof(List) / sizeof(List[0]);
    showBranch(newTree(List, lt,0));

    

    system("pause");
}


