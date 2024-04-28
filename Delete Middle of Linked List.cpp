class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(!head || !head->next)
        return NULL;
    Node* slow=head;
    Node* fast=head;
    int mid=0;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
        mid++;
    }
    int len=0;
    Node* curr=head;
    while(curr){
        len++;
        curr=curr->next;
    }
    if(len%2==0)
        mid=mid;
    else
        mid-=1;
    Node* temp=head;
    int i=0;
    while(i!=mid){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
    return head;
    }
};
