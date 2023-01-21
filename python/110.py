# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        big = small =0
tree =[]
def dfs(root):
    if root == None:
        return
    tree.append(root.val)
    dfs(root.left)
    dfs(root.right)
    return
