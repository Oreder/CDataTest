/*Queue - Linked List implementation*/
#include<stdio.h>
#include<stdlib.h>

struct node_t
{
	int data;
	struct node_t *next;
};

// Two global variables to store address of front and rear nodes.
struct node_t* front = NULL;
struct node_t* rear = NULL;

// To Enqueue an integer
void enqueue(int x)
{
	struct node_t *temp = malloc(sizeof(*temp));
	temp->data = x;
	temp->next = NULL;

	if(front == NULL && rear == NULL)
    {
		front = rear = temp;
		return ;
	}

	rear->next = temp;
	rear = temp;
}

// To Dequeue an integer.
void dequeue()
{
	struct node_t *temp = front;
	if(front == NULL)
    {
		printf("Queue is Empty\n");
		return;
	}

	if(front == rear)
    {
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	free(temp);
}

int Front()
{
	if(front == NULL) {
		printf("Queue is empty\n");
		return;
	}
	return front->data;
}

void Print()
{
	struct node_t* temp = front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue
	Enqueue(2); Print();
	Enqueue(4); Print();
	Enqueue(6); Print();
	Dequeue();  Print();
	Enqueue(8); Print();
}
