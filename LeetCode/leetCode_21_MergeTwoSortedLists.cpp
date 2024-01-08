/*
21. Merge Two Sorted Lists
Easy
20.8K
2K
Companies
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]


Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/
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
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        if(list1 == nullptr){
            return list2;
        }
        else if(list2 == nullptr){
            return list1;
        }
        else{
            while(list1 != nullptr || list2 != nullptr){
                if(list1 == nullptr){
                    while(list2 != nullptr){
                        temp->val = list2->val;
                        temp->next = new ListNode();
                        temp = temp->next;
                        list2 = list2->next;
                    }
                    break;
                }
                else if(list2 == nullptr){
                    while(list1 != nullptr){
                        temp->val = list1->val;
                        temp->next = new ListNode();
                        temp = temp->next;
                        list1 = list1->next;
                    }
                    break;
                }
                else if(list1->val < list2->val){
                    temp->val = list1->val;
                    temp->next = new ListNode();
                    temp = temp->next;
                    list1 = list1->next;
                }
                else{
                    temp->val = list2->val;
                    temp->next = new ListNode();
                    temp = temp->next;
                    list2 = list2->next;
                }
            }
        }
        ListNode* safeDel = ans;
        while(safeDel->next->next != nullptr){
            safeDel = safeDel->next;
        }
        safeDel->next = nullptr;
        delete temp;
        return ans;
    }
};
