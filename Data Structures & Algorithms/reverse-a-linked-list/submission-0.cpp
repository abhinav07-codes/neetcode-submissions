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
    ListNode* reverseList(ListNode* head) {
        //1----2-----3-----4-----5----Null
        if(head== NULL){

            return NULL;

        }

        ListNode *prev  = NULL;
        ListNode *curr = head;
        

        while(curr){

            ListNode *temp = curr->next; //2
            curr->next = prev;//1--->Null
            prev = curr;//1
            curr = temp;//2

        }
        return prev;

        
        
    }
};
