class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
       if(K==1) return NULL; 
      Node* temp = head; 
      int k = K; 
      while(temp){
          if(k==2 && temp->next ){
              temp->next = temp->next->next;
              k = K; 
          } else {
            k--;
          }
          temp = temp->next;
      }
      return head;
    }
};
