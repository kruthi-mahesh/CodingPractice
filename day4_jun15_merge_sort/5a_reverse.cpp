#include<iostream>
#include <stdio.h>
using namespace std;

typedef struct Node
{
    int data;
    Node* next;
}*node;

node merge(node a, node b)
{
    if (a==NULL && b==NULL)
     return NULL;

    node res = NULL;
 
    while (a != NULL && b != NULL)
    {

        if (a->data <= b->data)
        {
            node temp = a->next;
            a->next = res;

            res = a;
 
            // Move ahead in first list
            a = temp;
        }

        else    //replace a with b
        {
            node temp = b->next;
            b->next = res;
            res = b;
            b = temp;
        }
    }
 
    while (a != NULL)
    {
        node temp = a->next;
        a->next = res;
        res = a;
        a = temp;
    }
 

    while (b != NULL)
    {
        node temp = b->next;
        b->next = res;
        res = b;
        b = temp;
    }
 
    return res;
}
 

node newNode(int data)
{
    node temp = new Node;
    temp->data = data;
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