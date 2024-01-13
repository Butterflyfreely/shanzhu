#include <iostream>
using namespace std;

struct TreeNode {//�������ڵ�
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

// new a tree 
TreeNode* newTree(int list[], int lt, int i = 0) {//����
    if (i >= lt) return nullptr;
    TreeNode* t = new TreeNode(list[i]);
    t->left = newTree(list, lt, 2 * i + 1);
    t->right = newTree(list, lt, 2 * i + 2);
    return t;
}

void showBranch(TreeNode* root) {//ǰ�����
    if (root == nullptr) return;
    root->val == NULL ? cout << ("x") << endl : cout << (root->val) << endl;//�սڵ���x��ʾ
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