#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    struct Node *next; //self refrencing structure
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"element:"<<ptr->data;
        ptr = ptr->next;
        cout<<endl;
     }
}
//Case 1 delete at first
struct Node* deleteFirst(struct Node*head)
{
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

// Case 2 delete at index
struct Node* deleteIndex(struct Node*head, int index)
{
struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
 // Case 3 delting the last node
 struct Node* deleteLast(struct Node*head)
 {
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
     p->next=NULL;
    free(q);
    return head;
 }

 // case 4 deleting the node with given value
 struct Node* deleteValue(struct Node*head, int value)
{
struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q-> data==value)
    {
        p-> next=q-> next;
        free(q);
    }
        return head;
}
 
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    cout<<"linkedlist before deletion\n";
    linkedListTraversal(head);
   // head=deleteIndex(head,2); deletion at index
   // head=deleteFirst(head);//deletion of first element in L.L
   // head=deleteLast(head); deletion at last
    head=deleteValue(head,41);
    cout<<"linkedlist after deletion\n";
    linkedListTraversal(head);
    return 0;
}