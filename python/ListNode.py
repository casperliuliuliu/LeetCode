class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

    def set_listnode_by_list(head,list1):
        if len(list1)==0:
            return None
        head = cur =  ListNode()
        head.next = cur
        for ii in list1:
            cur.next = ListNode()
            cur = cur.next
            cur.val = ii
        head = head.next
        return head

    def show_listnode(ln):
        if ln == None:
            print('nothing')
        while ln!=None:
            print(ln.val)
            ln = ln.next

if __name__ == "__main__":
    list1= [1,2,3]
    good = ListNode()
    good =good.set_listnode_by_list(list1)
    good.show_listnode()