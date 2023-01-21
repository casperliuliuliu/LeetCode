#include<iostream>
using namespace std;
#include<unistd.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void show_listnode(ListNode* ln){
    if(ln == nullptr)
        cout << "nullptr" << endl;
    else{
        while(ln != nullptr){
            cout << ln->val;
            ln = ln->next;
        }
        cout << endl;
    }

}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* ln,*ans;
    ln = new ListNode();
    ans = ln; // need to point to the next one before return

    while(list1!=nullptr && list2!=nullptr){
        ln->next = new ListNode();
        ln = ln->next;
        if(list1->val<list2->val){
            ln->val = list1->val;
            list1 = list1->next;
        }
        else{
            ln->val = list2->val;
            list2 = list2->next;
        }
        cout << ln->val;
    }

    if(list1==nullptr){
        ln->next = list2;
    }
    else{
        ln->next = list1;
    }
    
    cout << "finish merging." << endl;
    return ans->next;
}

ListNode* create_listnode_by_array(int aa[],int size){
    if(size==0)
        return nullptr;

    ListNode* ll = new ListNode();
    ll->val = aa[0];
    ListNode *ans = ll;
    for(int ii = 1;ii< size/sizeof(aa[0]);ii++){
        ll->next = new ListNode(aa[ii]);
        ll = ll->next;
    }
    return ans;
}



// int main(){
//     ListNode* L1;
//     ListNode* L2;
//     int aa[] = {};
//     int a2[] = {};

//     L1 = create_listnode_by_array(aa, sizeof(aa));
//     L2 = create_listnode_by_array(a2, sizeof(a2));
    
//     show_listnode(L1);
//     ListNode *ans = mergeTwoLists(L1,L2);
//     show_listnode(ans);
//     return 0;
// }