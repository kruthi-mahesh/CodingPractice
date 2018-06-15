#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct Node
{
    int data;
    Node* next, *prev;
}*node;
 
node split(node head);
 
// Function to merge two linked lists
node merge(node first, node second)
{
    // If first linked list is empty
    if (!first)
        return second;
 
    // If second linked list is empty
    if (!second)
        return first;
 
    // Pick the smaller value
    if (first->data < second->data)
    {
        first->next = merge(first->next,second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }
    else
    {
        second->next = merge(first,second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}
 
node mergeSort(node head)
{
    if (!head || !head->next)
        return head;
    node second = split(head);
 
    // Recur for left and right halves
    head = mergeSort(head);
    second = mergeSort(second);
 
    // Merge the two sorted halves
    return merge(head,second);
}

// Split a doubly linked list (DLL) into 2 DLLs of
// half sizes
node split(node head)
{
    node fast = head;
    node slow = head;
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    node temp = slow->next;
    slow->next = NULL;
    return temp;
}
 

void insert(node* headref, int data)
{
    node head = *headref;

    node temp = new Node; 
    temp->data = data;
    temp->next = temp->prev = NULL;

    if (!head)
        (*headref) = temp;
    else
    {
        temp->next = head;
        head->prev = temp;
        (*headref) = temp;
    }
}
 
// A utility function to print a doubly linked list in
// both forward and backward directions
void print(node head)
{
    node temp = head;
    printf("Forward Traversal using next poitner\n");
    while (head)
    {
        printf("%d ",head->data);
        temp = head;
        head = head->next;
    }
    printf("\nBackward Traversal using prev pointer\n");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    cout<<endl;
}
 
// Utility function to swap two integers
void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}
 


// Driver program
int main(void)
{
    node head = NULL;
    insert(&head,5);
    insert(&head,20);
    insert(&head,4);
    insert(&head,3);
    insert(&head,30);
    insert(&head,10);
    head = mergeSort(head);
    printf("Linked List after sorting\n");
    print(head);
    return 0;
}
/*
Output:
Linked List after sorting
Forward Traversal using next pointer
3 4 5 10 20 30
Backward Traversal using prev pointer
30 20 10 5 4 3
*/