#include <iostream>
using namespace std;

struct TreeNode {//定义树节点
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

// new a tree 
TreeNode* newTree(int list[], int lt, int i = 0) {//种树
    if (i >= lt) return nullptr;
    TreeNode* t = new TreeNode(list[i]);
    t->left = newTree(list, lt, 2 * i + 1);
    t->right = newTree(list, lt, 2 * i + 2);
    return t;
}

void showBranch(TreeNode* root) {//前序遍历
    if (root == nullptr) return;
    root->val == NULL ? cout << ("x") << endl : cout << (root->val) << endl;//空节点用x表示
    showBranch(root->left);
    showBranch(root->right);
}
//
int main() {
    TreeNode* root;
    int List[] = { 1,NULL,2,2 };
    int lt = sizeof(List) / sizeof(List[0]);
    showBranch(newTree(List, lt));
    // getchar();
}