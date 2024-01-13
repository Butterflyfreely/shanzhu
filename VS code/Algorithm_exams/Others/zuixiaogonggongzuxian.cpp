#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 根据数组构造二叉树
TreeNode* construct_binary_tree(const vector<int>& vec) {
    vector<TreeNode*> vecTree(vec.size(), NULL);
    TreeNode* root = NULL;
    for (int i = 0; i < vec.size(); i++) {
        TreeNode* node = NULL;
        if (vec[i] != -1) node = new TreeNode(vec[i]);
        vecTree[i] = node;
        if (i == 0) root = node;
    }
    for (int i = 0; i * 2 + 2 < vec.size(); i++) {
        if (vecTree[i] != NULL) {
            vecTree[i]->left = vecTree[i * 2 + 1];
            vecTree[i]->right = vecTree[i * 2 + 2];
        }
    }
    return root;
}

class Solution {



public:
    vector<int> getPath(TreeNode* root,int target)
    {
        vector<int> path;
        TreeNode* node=root;
        
        while(node->val!=target)
        {
            path.push_back(node->val);
            
            if(target<node->val)node=node->left;
            else node=node->right;
        }
        path.push_back(node->val);
        return path;        
    }    
    
    int lowestCommonAncestor(TreeNode* root, int p, int q) {
        // write code here
        vector<int> path_p=getPath(root,p);
        vector<int> path_q=getPath(root,q);
        int res=0;
        for(int i = 0; i < path_p.size() && i < path_q.size(); i++){
            if(path_p[i] == path_q[i])
                //最后一个相同的节点就是最近公共祖先
                res = path_p[i];
            else
                break;
        }
        return res;
    }
};

int main() {
    // 注意本代码没有考虑输入异常数据的情况
    // 用 -1 来表示null{7,1,12,0,4,11,14,#,#,3,5},0,3
    vector<int> vec = {7,1,12,0,4,11,14,-1,-1,3,5};
    int p=0;
    int q=3;
    TreeNode* root = construct_binary_tree(vec);
    Solution s1;
    cout<<s1.lowestCommonAncestor(root,p,q);



    system("pause");
    return 0;
}












