#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* sortList(ListNode* head) {

        ListNode* res;
        vector<int> tab = {};
        res = head;
        
        if (res == NULL) { return NULL; }

        while (res->next != NULL) {
            tab.push_back(res->val);
            res = res->next;
        }
        tab.push_back(res->val);
        
        sort(tab.begin(), tab.begin() + tab.size());

        res = head;
        
        int i = 0;
        while (res->next != NULL) {
            res->val = tab[i];
            res = res->next;
            i++;
        }
        res->val = tab[i];
        
        return head;
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
    ListNode* node4;

    ListNode* listFinal;

    node4 = new ListNode(3, nullptr);
    node3 = new ListNode(1, node4);
    node2 = new ListNode(2, node3);
    node1 = new ListNode(4, node2);

    listFinal = sol1.sortList(node1);
    sol1.printList(listFinal);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
}
