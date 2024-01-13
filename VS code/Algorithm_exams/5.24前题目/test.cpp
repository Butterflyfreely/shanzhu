#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

TreeNode* construct_binary_tree(const vector<int>& vec)
{
    vector<TreeNode*> vectree(vec.size(),NULL);
    TreeNode* root=NULL;

    for(int i=0;i<vec.size();i++)
    {
        TreeNode* node=NULL;
        if(vec[i]!=-1)node=new TreeNode(vec[i]);
		vectree[i]=node;
        if(i==0)root=node;
    }

    for(int j=0;j*2+2<vec.size();j++)
    {
        if(vectree[j]!=NULL)
        {
            vectree[j]->left=vectree[j*2+1];
            vectree[j]->right=vectree[j*2+2];
        }
    } 
    return root;
}



void print_tree(TreeNode* root)
{
    queue<TreeNode*> que;
    que.push(root);

    while(!que.empty())
    {
        int size=que.size();
        vector<int> vec1;
        for(int i=0;i<size;i++)
        {
            TreeNode* node=que.front();
            que.pop();
            vec1.push_back(node->val);
            if(node->left)que.push(node->left);
            if(node->right)que.push(node->right);           

        }

        for(int j=0;j<size;j++)
        {
            cout<<vec1[j]<<" ";
        }
        cout<<endl;

    }
}


int main()
{
    vector<int> vec={1,2,3,4,-1,6};
    TreeNode* root=construct_binary_tree(vec);
    //print_tree(root);

    system("pause");
    return 0;
}