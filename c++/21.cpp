#include"listNode.h"
#include<iostream>
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr)
        return list2;
    else if (list2 == nullptr)
        return list1;
        cout << list1->val;

    if(list1->val<=list2->val){
        list1->next = mergeTwoLists(list1->next,list2);
        return list1;
    }
    else{
        list2->next = mergeTwoLists(list2->next,list1);
        return list2;
    }
    return nullptr;
}

int main(){
    // int a1[] = {1,3,5};
    // int a2[] = {2,4,6};
    // ListNode* l1 = generate_list_by_array(a1,3);
    // ListNode* l2 = generate_list_by_array(a2,3);
    test();
}
