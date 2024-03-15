/*Structure of Node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/
// your task is to complete this function
void sort(Node **head)
{
    Node* dummy =new Node(-1);
    Node* arr=dummy;
    Node* curr=*head;
    while(curr){
        Node* temp=curr;
        while(temp){
            if(temp->data<curr->data)
                swap(curr->data,temp->data);
            temp=temp->next;
        }
        arr->next=curr;
        arr=arr->next;
        curr=curr->next;
    }
    *head=dummy->next;
}
