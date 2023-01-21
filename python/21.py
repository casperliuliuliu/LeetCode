# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

import ListNode

class Solution(object):
    def mergeTwoLists(list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if(list1 == None):
            return list2
        elif list2 == None:
            return list1

        if list1.val <= list2.val:
            list1.next = Solution.mergeTwoLists(list1.next,list2)
            return list1
        else:
            list2.next = Solution.mergeTwoLists(list2.next,list1)
            return list2
        
if __name__ == "__main__":
    ans=l1 =l2= ListNode.ListNode()
    list1 = [1,3,5]
    list2 = [2,4,6]
    l1 =l1.set_listnode_by_list(list1)
    l2 =l1.set_listnode_by_list(list2)

    l1.show_listnode()
    l2.show_listnode()
    
    ans = Solution.mergeTwoLists(l1,l2)
    print('ans')
    ans.show_listnode()
