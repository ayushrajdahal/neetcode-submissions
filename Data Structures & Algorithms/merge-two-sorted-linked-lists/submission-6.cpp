/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* combined = new ListNode();
        ListNode* ptr = combined;
        
        while (list1 && list2) {
            
            // can't compare the val if one of them is nullptr. so, we have to do AND in the while condition above.
            if (list1->val < list2->val) {
                combined->next = list1;
                list1 = list1 -> next;
            } else {
                combined->next = list2;
                list2 = list2 -> next;
            }

            combined = combined->next;
        }

        // pick up the remaining nodes if there are any

        if (list1) {
            combined->next = list1;
        }

        if (list2) {
            combined->next = list2;
        }

        return ptr->next;
    }
};
