#include <iostream>
#include<assert.h>
using namespace std;

typedef struct Node
{
	int data;
	Node* next;
}*node;


node sortedMerge(node a,node b)
{
	//node res;
	if(!a)
		return b;
	if(!b)
		return a;
	if(a->data <= b->data)
	{
		a->next = sortedMerge(a->next,b);
		return a;
		//res = a;
		//res->next = sortedMerge(a->next,b);
	}
	else
	{
		b->next = sortedMerge(a,b->next);
		return b;
		//res = b;
		//res->next = sortedMerge(a,b->next);
	}
	//return res;
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
	node a=NULL,b=NULL,res=NULL;
	push(&a, 15);
    push(&a, 10);
    push(&a, 5);
 
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);

    res = sortedMerge(a,b);
    printList(res);
	return 0;
}