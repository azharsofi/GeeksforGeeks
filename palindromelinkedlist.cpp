
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL)
        return false;
        Node *s=head;
        Node *f=head;
        while(f!=NULL&&f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        if(f!=NULL)
        s=s->next;
        Node *p=NULL;
        Node *c=s;
        while(c!=NULL){
            Node *n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        while(p!=NULL){
            if(p->data!=head->data){
                return false;}
                else{
                p=p->next;
                head=head->next;
                }
        }
        return true;
    }
};
