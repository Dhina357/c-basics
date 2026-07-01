#include <stdio.h>
#include<stdlib.h>
struct node{
     int data;
    struct node *nextNode;
}*head=NULL;

int append(int name){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=name;
    newNode->nextNode=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        struct node *lastNode=head;
        while(lastNode->nextNode!=NULL){
            lastNode=lastNode->nextNode;
            
        }
        lastNode->nextNode=newNode;
    }
    return 0;
}
int deleteNode(int name){
    
   int count=1;
   struct node *current=head;
   struct node *prev=NULL;
    while(current!=NULL){
        if(name<0||head==NULL)return 0;
        if(count%name==0){
         prev->nextNode=current->nextNode;
         current=current->nextNode;
        }
        else{
        prev=current;
        current=current->nextNode;}
    count++;
}
     return 0;   
}
int display(){
    struct node *temp=head;
    
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->nextNode;
    }
    return 0;
}
int solve(){
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
    int name;
     scanf("%d",&name);
    append(name);
      }
      display();
      int name;
     scanf("%d",&name);
     deleteNode(name);
     display();
     
    return 0;
}
int main(){
    solve();
    return 0;
    
}