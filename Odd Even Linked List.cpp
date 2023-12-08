class Solution {
public: 
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode* endNode=head;
        ListNode* curr=head;
        ListNode* nxt=head->next;
        while(endNode->next!=NULL){
            endNode=endNode->next;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        int mid=0;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            mid++;
        }
        while(mid--){
            curr->next=nxt->next;
            curr=curr->next;
            ListNode* temp=new ListNode(nxt->val);
            endNode->next=temp;
            endNode=endNode->next;
            //if(curr!=NULL || curr->next!=NULL)
            nxt=curr->next;
        }
        return head;
    }
};
