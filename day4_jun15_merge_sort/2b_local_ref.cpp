#include <iostream>
using namespace std;

typedef struct Node
{
	int data;
	Node* next;
}*node;

void MoveNode(node*,node*);

node sortedMerge(node a,node b)
{
	node res=NULL;
	node* lastPtrRef = &res;
	while(1)
	{
		if(a==NULL){
			//tail->next = b;
			*lastPtrRef = b;
			break;
		}
		else if(b==NULL)
		{
			//tail->next = a;
			*lastPtrRef = a;
			break;
		}
		if(a->data <= b->data)
			MoveNode(lastPtrRef,&a);
			//MoveNode(&(tail->next),&a);
		else
			MoveNode(lastPtrRef,&b);
			//MoveNode(&(tail->next),&b);
		
		lastPtrRef = &((*lastPtrRef)->next)
		//tail = tail->next;
	}
	//return dummy.next;
	return res;
}

void MoveNode(node* dest,node* src)
{
	node temp = *src;
	assert(temp != NULL);
	*src = temp->next;
	temp->next = *dest;
	*dest = temp;
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