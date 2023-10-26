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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev; 
    }
    int pairSum(ListNode* head) {
        if(head==NULL)
            return 0;
        if(head->next==NULL)
            return head->val;
        ListNode* curr=head;
        ListNode* next=head;
        while(next!=NULL && next->next!=NULL){
            curr=curr->next;
            next=next->next->next;
        }
        ListNode* temp=curr;
        ListNode* prev=reverse(temp);
        curr->next=NULL;
        int maxi=0;
        while(head!=NULL && prev!=NULL){
            maxi=max(maxi,head->val+prev->val);
            head=head->next;
            prev=prev->next;
        }
        return maxi;
    }
};
