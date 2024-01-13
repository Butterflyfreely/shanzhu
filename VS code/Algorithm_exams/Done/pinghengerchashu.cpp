#include<iostream>
//#include<string>  
#include<queue>
#include<vector>
//#include<binarytree.h>

using namespace std;

class solution
{
public:
    // �����Ըýڵ�Ϊ���ڵ�Ķ������ĸ߶ȣ�������Ƕ������������򷵻�-1
    int getHeight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }
        int leftHeight = getHeight(node->left);
        if (leftHeight == -1) return -1;
        int rightHeight = getHeight(node->right);
        if (rightHeight == -1) return -1;
        return abs(leftHeight - rightHeight) > 1 ? -1 : 1 + max(leftHeight, rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root) == -1 ? false : true;
    }
};

void main()
{



    system("pause");
}



