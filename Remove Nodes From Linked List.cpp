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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* prev=reverse(head);
        ListNode* curr=prev;
        ListNode* nxt=prev->next;
        stack<int> s;
        s.push(curr->val);
        while(nxt!=NULL){
            // if(curr->next!=NULL && curr->next->val==s.top())
            //     curr=curr->next;
            if(nxt->val>=s.top()){
                s.push(nxt->val);
                curr->next=nxt;
                curr=nxt;
            }
            nxt=nxt->next;
        }
        curr->next=nxt;
        ListNode* ans=reverse(prev);
        return ans;
    }
};
