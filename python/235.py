# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
    def build(self,l):
        if(len(l)==0):
            return None
        queue = []
        root = TreeNode(l[0])
        queue =[]
        queue.append(root)
        # print(queue[0].val)
        l.pop(0)
        while len(l)>0:

            cur = queue.pop(0)
            cur.left = TreeNode(l[0])
            queue.append(cur.left)
            l.pop(0)
            if len(l) ==0:
                break
            cur.right = TreeNode(l[0])
            queue.append(cur.right)
            l.pop(0)

        return root
        
    def show(self):
        queue = [self]
        while len(queue)>0:
            cur =queue[0]
            print(cur.val)
            if(cur.left!=None):
                queue.append(cur.left)
                if(cur.right!=None):
                    queue.append(cur.right)
            queue.pop(0)
    stack =[]
    def dfs(root):
        if root == None:
            return
        print(root.val)
        TreeNode.dfs(root.left)
        TreeNode.dfs(root.right)
        return

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        
if __name__ =='__main__':
    l = [1,2,3,4,5,6]
    tree1 = TreeNode()
    tree1 = tree1.build(l)
    #print(tree1.val)
    #tree1.show()
    #Solution.lowestCommonAncestor(0,tree1,2,8)
    tree1.dfs()

