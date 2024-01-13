#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

TreeNode* construct_binary_tree(vector<int>& vec)
{
    vector<TreeNode*> treevec(vec.size(),NULL);
    TreeNode* root=NULL;

    for(int i=0;i<vec.size();i++)
    {
        TreeNode* node=NULL;
        if(vec[i]!=-1)node=new TreeNode(vec[i]);
        treevec[i]=node;
        if(i==0)root=node;        
    }

    for(int i=0;i*2+2<vec.size();i++)
    {
        if(treevec[i]!=NULL)
        {
            treevec[i]->left=treevec[i*2+1];
            treevec[i]->right=treevec[i*2+2];
        }
    }
    return root;
}

void print_binary_tree(TreeNode* root)
{
    queue<TreeNode*> que;
    que.push(root);

    while(!que.empty())
    {
        int size=que.size();        

        for(int i=0;i<size;i++)
        {
            TreeNode* node=que.front();
            que.pop();

            if(node!=NULL)
            {
                cout<<node->val<<" ";
                if(node->left)que.push(node->left);
                if(node->right)que.push(node->right);
            }
            else cout<<"-1"<<" ";
        }
        cout<<endl;

    }
} 


int main()
{
    vector<int> vec={1,2,3,4,5,-1,6};
    TreeNode* root=construct_binary_tree(vec);
    print_binary_tree(root);

    system("pause");
}