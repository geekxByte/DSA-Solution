class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = head;
        int cnt=0;
        while(curr!=NULL && cnt<2){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++; 
        }
        if(forward!=NULL)
            head->next = swapPairs(forward);

        return prev;
    }
};
