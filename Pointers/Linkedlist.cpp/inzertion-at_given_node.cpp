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

struct Node* insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));//creating a node name ptr
   ptr->data=data;
   
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
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
    head=insertAfterNode(head,second,34); 
    linkedListTraversal(head);
    return 0;
}