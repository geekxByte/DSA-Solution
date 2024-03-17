class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
      unordered_map<int,int> mp;
      int cnt=0;
        
      while(head1){
          mp[head1->data]++;
          head1=head1->next;
      }
      while(head2){
          if(mp.find(x-head2->data)!=mp.end()){
              cnt++;
          }
           head2=head2->next;
      }
      return cnt;
    }
};
