# Definition for a binary tree node.

class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

        
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

def get_tree(self):
    l=[]
    queue = [self]
    while len(queue)>0:
        cur =queue[0]
        l.append(cur.val)
        if(cur.left!=None):
            queue.append(cur.right)
            if(cur.right!=None):
                queue.append(cur.left)
        queue.pop(0)
    return l

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
class Solution(object):
    
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root == None:
            return None
        ll = root.left
        rr = root.right
        root.right = Solution.invertTree(0,ll)
        root.left = Solution.invertTree(0,rr)
    
        return root

    
if __name__ == '__main__':
    l =[1,2,3,4,5,6,7]
    #l = [1,2,3]
    l = [4,2,7,1,3,6,9]
    r = build(0,l)
    r.show()
    print('')
    Solution.invertTree(0,r).show()