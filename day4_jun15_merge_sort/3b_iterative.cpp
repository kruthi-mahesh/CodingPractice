// C program to merge two sorted linked lists
// in-place.
#include<bits/stdc++.h>
using namespace std;
 
typedef struct Node
{
    int data;
    Node* next;
}*node;


node mergeUtil(node h1,node h2)
{

    if (!h1->next)
    {
        h1->next = h2;
        return h1;
    }
 
    // Initialize current and next pointers of
    // both lists
    node curr1 = h1;
    node next1 = h1->next;
    node curr2 = h2; 
    node next2 = h2->next;
 
    while (next1 && next2)
    {
        // if curr2 lies in between curr1 and next1
        // then do curr1->curr2->next1
        if ((curr2->data) > (curr1->data) &&
            (curr2->data) < (next1->data))
        {
            next2 = curr2->next;
            curr1->next = curr2;
            curr2->next = next1;
 
            // now let curr1 and curr2 to point
            // to their immediate next pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // if more nodes in first list
            if (next1->next)
            {
                next1 = next1->next;
                curr1 = curr1->next;
            }
 
            // else point the last node of first list
            // to the remaining nodes of second list
            else
            {
                next1->next = curr2;
                return h1;
            }
        }
    }
    return h1;
}
 
// Merges two given lists in-place. This function
// mainly compares head nodes and calls mergeUtil()
node merge(node h1, node h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;
 
    // start with the linked list
    // whose head data is the least
    if (h1->data < h2->data)
        return mergeUtil(h1, h2);
    else
        return mergeUtil(h2, h1);
}
 
node newNode(int key)
{
    node temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
void printList(node temp)
{
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node head1 = newNode(1);
    head1->next = newNode(3);
    head1->next->next = newNode(5);
 
    // 1->3->5 LinkedList created
 
    node head2 = newNode(0);
    head2->next = newNode(2);
    head2->next->next = newNode(4);
 
    // 0->2->4 LinkedList created
 
    node mergedhead = merge(head1, head2);
 
    printList(mergedhead);
    return 0;
}


