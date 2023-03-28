class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    int c=0;
    
        //Code here
        while(head!=NULL){
            head=head->next;
            c++;
        }
    return c;
    }
};
