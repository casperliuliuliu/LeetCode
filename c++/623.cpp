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
TreeNode* addOneRow(TreeNode* root, int val, int depth){
    if(depth == 1){
        TreeNode* rnew = new TreeNode(val,nullptr,root);
        return rnew;
    }
    if(depth >2 ){
        if(root->left)
            addOneRow(root->left,val,depth-1);
        if(root->right)
            addOneRow(root->right,val,depth-1);
        return root;
    }

    TreeNode* rnew = new TreeNode(val,nullptr,root->right);
    TreeNode* lnew = new TreeNode(val,root->left,nullptr);

    root->left = lnew;
    root->right = rnew;
    return root;
}

void buildTree(int* array)
{

}
int main()
{
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(1);
    addOneRow(root,1,3);
    cout << root->left->right->val;
    cout << root->left->left->val;
}