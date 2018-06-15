#include <iostream>
using namespace std;

typedef struct Node
{
	int data;
	Node* next;
}*node;


void split(node head,node* a,node* b)
{
	node slow,fast;
	slow = head;
	fast = head->next;
	while(fast!=NULL)
	{
		fast = fast->next;
		if(fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	*a = head;
	*b = slow->next;
	slow->next = NULL;
	
}

node merge(node a,node b)
{
	if(a==NULL)
		return b;
	if(b==NULL)
		return a;
	node res ;
	if(a->data <= b->data)
	{
		res = a;
		res->next = merge(a->next,b);
	}
	else
	{
		res = b;
		res->next = merge(a,b->next);
	}
	return res;
}

void mergeSort(node* headref)
{
	node head = *headref;
	node a,b;
	//base case
	if(head == NULL || head->next == NULL)
		return;

	split(head,&a,&b);

	mergeSort(&a);
	mergeSort(&b);
	*headref = merge(a,b);
}

void push(node* headref,int val)
{
	node head = *headref;
	node newNode = new Node;
	newNode->data = val;
	newNode->next = head;
	*headref = newNode;
}
void printList(node temp)
{
	while(temp)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	node head=NULL;
	push(&head,14);
	push(&head,44);
	push(&head,24);
	push(&head,64);
	push(&head,54);
	push(&head,4);
	printList(head);
	mergeSort(&head);
	printList(head);
	return 0;
}