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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
                struct ListNode* temp=head;
        
        int len=0;

        while(temp!=NULL){
            temp=temp->next;
            len++;
        }

        if(n>len){
            return NULL;
        }
        if(len-n==0){
            head=head->next;
            return head;
        }
        struct ListNode* pre=head;
        temp=head;

        for(int i=0;i<len-n;i++){
            pre=temp;
            temp=temp->next;
        }
        pre->next=temp->next;
        return head;
    }
};