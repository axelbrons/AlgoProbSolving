#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};


class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* ptr;
        ListNode* res;
        ListNode* temp;
        ListNode* sol;

        if (list1 == NULL && list2 !=NULL) {
            return list2;
        }
        if (list1 != NULL && list2 == NULL) {
            return list1;
        }
        if (list1 == NULL && list2 == NULL) {
            return NULL;
        }

        if (list1->val <= list2->val) {
            res = list1;
            sol = list1;
            ptr = list2;
        }
        else {
            res = list2;
            sol = list2;
            ptr = list1;
        }

        while(res->next != NULL) {
            if (ptr->val <= res->next->val) {
                temp = ptr;
                ptr = res->next;
                res->next = temp;
                res = res->next;
            }
            else {
                res = res->next;
            }
            
        }
        res->next = ptr;
       
        return sol;
    }

    void printList(ListNode* list) {
        while (list->next != NULL) {
            cout << list->val;
            list = list->next;
        }
        cout << list->val;
    }

    

};





int main()
{
    
    Solution sol1;


    ListNode* node1;
    ListNode* node2;
    ListNode* node3;

    ListNode* listFinal;

    node3 = new ListNode(4,nullptr);
    node2 = new ListNode(2,node3);
    node1 = new ListNode(1,node2);

    ListNode* node11;
    ListNode* node22;
    ListNode* node33;
    

    node33 = new ListNode(4, nullptr);
    node22 = new ListNode(3, node33);
    node11 = new ListNode(1, node22);

    listFinal = sol1.mergeTwoLists(node1, node11);
    sol1.printList(listFinal);

    
    delete node11;
    delete node22;
    delete node33;
    delete node1;
    delete node2;
    delete node3;

   
    
    
}

