#include<stdio.h>

typedef struct _node
{
   unsigned int val;
   struct _node *next;
   _node(unsigned int val):val(val)
   {
       next=NULL;
   }
}node,Node;

node *getNode(unsigned int val)
{
   return(new node(val));
}

node *insert(node *head, node *newNode)
{
    node *temp=head;
    if(temp == NULL)
    {
        head = newNode;
        return head;
    }
    
    while(temp->next != NULL)
    {
       temp=temp->next;
    }
    temp->next = newNode;
    return head;
}

node *insert_first(node *head, node *newNode)
{
    newNode->next=head;
    return newNode;
}

void print(node *head)
{
    node *temp=head;
    
    while(temp != NULL)
    {
       printf("%d->",temp->val);
       temp=temp->next;
    }
    printf("|\n");
}

node *reverse(node *head)
{
    node *prev = NULL,*next = NULL;
    node *current = head;
    while(current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}


Node* Reverse(Node *head)
{
    if(head == NULL)
        return head;
    if(head -> next == NULL)
        return head;
    Node * hs = Reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return hs;
}
/*
node *rev_recur(node *head)
{
    node *current=NULL, *next=NULL;

    if(current == NULL)
        return NULL;

    current = head;
    next = current->next;
  
    if(next == NULL)
        return current;

    next = rev_recur(next);

    current->next->next=current;
    current->next=NULL;

    return next;
}
*/



void rev_print(node *head)
{
   if(head == NULL)
       return;
   rev_print(head->next);
   printf("%d->",head->val);
}

int main()
{
 node *head;
 head = insert(head,getNode(2));
 head = insert(head,getNode(12));
 head = insert(head,getNode(26));
 head = insert(head,getNode(72));
 head = insert(head,getNode(29));
 print(head);
 head = insert_first(head,getNode(52));
 print(head);
 head = insert_first(head,getNode(612));
 print(head);
 head = insert_first(head,getNode(276));
 print(head);
 head = insert_first(head,getNode(726));
 print(head);
 head = reverse(head);
 print(head);
// rev_print(head);
 head = Reverse(head);
 print(head);
 return 0;
}
