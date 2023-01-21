#ifndef PLAYER_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define PLAYER_H

#include<iostream>
using namespace std;

struct ListNode {
    int val;
   ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void show_list(ListNode* tem);
ListNode* generate_list_by_array(int array[],int size);
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
void test();

#endif