#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char *data;
	struct node *nextNode;
}*head=NULL;

struct node *reverse(struct node *tail) {
	struct node *prev = NULL;
	struct node *current = tail;
	struct node *next = NULL;

	while (current != NULL) {
		next = current->nextNode;
		current->nextNode = prev;
		prev = current;
		current = next;
	}
	return prev;



}
void append(char *name)
{
	//1. create memory for the node
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	//2. initialize the values to the node memory
	newnode->data = name;
	newnode->nextNode = NULL;
	//3. connection between them
	if(head==NULL)
	{
		head = newnode;
	}
	else
	{
		struct node *lastnode=head;
		while(lastnode->nextNode!=NULL) {
			lastnode=lastnode->nextNode;

		}
		lastnode->nextNode=newnode;

	}
}
void display()
{
	struct node *temp = head;
	while(temp->nextNode!=NULL)
	{
		printf("%s ",temp->data);
		temp = temp->nextNode;
	}
	printf("%s\n",temp->data);
}
int solve() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		char *name = (char*)malloc(100+1);
		scanf("%s",name);// c cpp java
		append(name);
	}
	display();
	int key;
	scanf("%d",&key);
	struct node *devNode=head;
	int count=1;
	int flag=1;
struct node *dummy=head;
	struct node *lastend=NULL;
	while(devNode!=NULL) {
		struct node *nextitrNode=devNode->nextNode;
		if(count==key) {
			if(flag) {

				devNode->nextNode=NULL;
				struct node *ptr= reverse(dummy);
				
				
			    if(lastend==NULL)head=ptr;
				else lastend->nextNode=ptr;
				dummy->nextNode=nextitrNode;
				lastend=dummy;

flag=0;
			}
			else{
			   flag=1;
			    lastend=devNode;
			}
			 count=0;
			dummy=nextitrNode;
		}
        count++;
		devNode=nextitrNode;
	}
	if(count>1&&flag&&dummy!=NULL){
	    struct node *ptr=reverse(dummy);
	    if(lastend==NULL)head=ptr;
				else lastend->nextNode=ptr;
	}

	display();
	return 0;

}
int main()
{
	solve();
	return 0;
}