#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector< vector<int> > vv;

vector< vector<int> > verticalTraversal(TreeNode* root) {
    
    vector<int> v;
    vv.push_back(v);
    
    return vv;
}
void check(TreeNode tt)
{
    ｓ
}

int main()
{
    TreeNode t1(1);
    t1.left = new TreeNode(2);
    t1.right = new TreeNode(3);
    t1.left->left = new TreeNode(4);
    t1.left->right = new TreeNode(5);
    t1.right->left = new TreeNode(6);
    t1.right->right = new TreeNode(7);

    verticalTraversal(&t1);
}