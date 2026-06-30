#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char *data;
    struct node *nextNode;
}*head=NULL;
void delete(int count){
    for(int i=0;i<count;i++){
    head=head->nextNode;
    }
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
    {   struct node *lastnode=head;
        while(lastnode->nextNode!=NULL){
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
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char *name = (char*)malloc(100+1);
        scanf("%s",name);// c cpp java
        append(name);
    }
    
    display();
    int count;
    printf("no of list to delete");
    scanf("%d",&count);
    delete(count);
    display();
    return 0;
}