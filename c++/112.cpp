#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int len;
bool hasPathSum(TreeNode* root, int targetSum,int check=0)
{
    if( root ==nullptr)
        return 0;
    if(targetSum == root->val){
        if(root->left == nullptr&&root->right == nullptr)
            return 1;
    }
    return hasPathSum(root->left,targetSum-root->val,check+1)|| hasPathSum(root->right,targetSum-root->val,check+1);

}
int length(TreeNode* root)
{
    if(root == nullptr)
        return 0;
    else
        return length(root->right) >length(root->left) ?1+length(root->right) :1+length(root->left);
}
int main()
{

}