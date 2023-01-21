#include"listNode.h"
void show_list(ListNode* tem){
    while(tem != nullptr)
    {
        cout << tem->val;
        tem = tem->next;
    }
}

ListNode* generate_list_by_array(int array[],int size){
    if(size ==0)
        return nullptr;
    ListNode* head = new ListNode();
    head->next = new ListNode();
    ListNode* current = head;
    current->val = array[0];

    for(int ii=1;ii<size;ii++)
    {
        current->next = new ListNode();
        current = current->next;
        current->val = array[ii];
    }

    return head;
}
void test(){
    cout << "hello";
}

int main(){
    int array[] = {1,2,3};
    ListNode* tem = generate_list_by_array(array,sizeof(array)/sizeof(array[0]));
    test();
    show_list(tem);

}