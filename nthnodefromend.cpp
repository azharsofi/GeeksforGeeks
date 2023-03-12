int getNthFromLast(Node *head, int n)
{
       // Your code here
       int c=0;
       Node *p=head;
       while(p!=NULL){
           p=p->next;
           c++;
       }
       if(n>c)
       return -1;
       p=head;
       if(n==c)
       return head->data;
       
       for(int i=1;i<c-n;i++){
           p=p->next;
           
       }
       return p->next->data;
       
}
