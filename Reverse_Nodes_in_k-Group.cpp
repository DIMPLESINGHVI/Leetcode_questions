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
    ListNode* reverseKGroup(ListNode* head, int k) {

        int len=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            len++;
        }

        if(len<k)
        {
            return head;
        }

        //base case
        if(head == NULL)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* fwd = NULL;
        int cnt=0;

        while(curr!=NULL && cnt<k)
        {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr=fwd;
            cnt++;
        }

        if(fwd!=NULL)
        {
            head->next = reverseKGroup(fwd,k);
        }

        return prev;

        
    }
};
