Node *removeDuplicates(Node *head)
{
 // your code goes here
 
 Node *p=head;
 while(p!=NULL&&p->next!=NULL){
     if(p->data==p->next->data)
     {
         p->next=p->next->next;
     }
     else{

         p=p->next;
     }
 }
 return head;
}
