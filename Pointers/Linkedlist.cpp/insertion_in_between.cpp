#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    struct Node *next;
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

struct Node* insertAtIndex(struct Node*head,int data,int index)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));//creating a node name ptr
    struct Node * p = head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;  
    }
   ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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
 
    linkedListTraversal(head);
    head=insertAtIndex(head,56,3); 
    linkedListTraversal(head);
    return 0;
}