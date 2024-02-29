/*
234. Palindrome Linked List
Solved
Easy

Topics
Companies
Given the head of a singly linked list, return true if it is a
palindrome
 or false otherwise.



Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false


Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
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
    bool isPalindrome(ListNode* head) {
        ListNode* fin = head;
        vector<int> firstHalf;
        int size = 1;
        while(fin->next != nullptr){
            size ++;
            fin = fin->next;
        }
        fin = head;
        if(size == 1){
            return true;
        }
        cout << "size " << size << endl;
        int firstSize = size/2;

        for(int i =0; i < firstSize; i++){
            firstHalf.push_back(fin->val);
            fin = fin->next;
        }
        if(size % 2 != 0){
            fin = fin->next;
        }
        int index = 1;
        while(fin){
            cout<< fin->val << "!=" << firstHalf[firstSize - index] << endl;
            if(fin->val != firstHalf[firstSize - index]){
               return false;
            }
            index++;
            fin = fin->next;
        }
        return true;


    }
};
