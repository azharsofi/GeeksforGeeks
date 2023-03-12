
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        struct Node *p=NULL;
        struct Node *c=head;
        struct Node *n=head->next;
        while(c!=NULL){
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)
            n=n->next;
        }
        return p;
        // return head of reversed list
    }
    
};
    
