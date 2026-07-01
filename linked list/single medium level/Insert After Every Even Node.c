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
int add(int name){
    
    struct node *ad=head;
    while(ad!=NULL){
        if(ad->data%2==0){struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=name;
    newNode->nextNode=NULL;
        newNode->nextNode=ad->nextNode;
        ad->nextNode=newNode;
        ad=ad->nextNode;
        ad=ad->nextNode;
            
        }else
        
        ad=ad->nextNode;
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
     add(name);
     display();
     
    return 0;
}
int main(){
    solve();
    return 0;
    
}