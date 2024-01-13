#include <iostream>
#include <vector>
#include <queue>
#include<unordered_map>
#include<stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    //建树函数
    //四个int参数分别是前序最左节点下标，前序最右节点下标
    //中序最左节点下标，中序最右节点坐标
    TreeNode* buildTree(vector<int>& xianxu, int l1, int r1, vector<int>& zhongxu, int l2, int r2) {
        if(l1 > r1 || l2 > r2)
            return NULL;
        //构建节点
        TreeNode* root = new TreeNode(xianxu[l1]); 
        //用来保存根节点在中序遍历列表的下标  
        int rootIndex = 0;    
        //寻找根节点
        for(int i = l2; i <= r2; i++){
            if(zhongxu[i] == xianxu[l1]){
                rootIndex = i;
                break;
            }
        }
        //左子树大小
        int leftsize = rootIndex - l2;    
        //右子树大小
        int rightsize = r2 - rootIndex;    
        //递归构建左子树和右子树
        root->left = buildTree(xianxu, l1 + 1, l1 + leftsize, zhongxu, l2 , l2 + leftsize - 1);
        root->right = buildTree(xianxu, r1 - rightsize + 1, r1, zhongxu, rootIndex + 1, r2);
        return root;
    }

    //深度优先搜索函数
    vector<int> rightSideView(TreeNode* root) {
        //右边最深处的值
        unordered_map<int, int> mp;
        //记录最大深度
        int max_depth = -1; 
        //维护深度访问节点
        stack<TreeNode*> nodes; 
        //维护dfs时的深度
        stack<int> depths;  
        nodes.push(root); 
        depths.push(0);
        while (!nodes.empty()){
            TreeNode* node = nodes.top();
            nodes.pop();
            int depth = depths.top();
            depths.pop();
            if (node != NULL) {
            	//维护二叉树的最大深度
                max_depth = max(max_depth, depth);
                //如果不存在对应深度的节点我们才插入
                if (mp.find(depth) == mp.end())
                    mp[depth] =  node->val;
                nodes.push(node->left);
                nodes.push(node->right);
                depths.push(depth + 1);
                depths.push(depth + 1);
            }
        }
        vector<int> res;
        for (int i = 0; i <= max_depth; i++)
            res.push_back(mp[i]);
        return res;
    }


    vector<int> solve(vector<int>& xianxu, vector<int>& zhongxu) {
        vector<int> res;
        //空节点
        if(xianxu.size() == 0) 
            return res;
        //建树
        TreeNode* root = buildTree(xianxu, 0, xianxu.size() - 1, zhongxu, 0, zhongxu.size() - 1);
        //找每一层最右边的节点
        return rightSideView(root);
    }
};


int main() {
    // 注意本代码没有考虑输入异常数据的情况
    // 用 -1 来表示null
    vector<int> xianxu = {1,2,4,5,3};
    vector<int> zhongxu = {4,2,5,1,3};
    Solution s1;
    vector<int> res=s1.solve(xianxu,zhongxu);
     
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}




