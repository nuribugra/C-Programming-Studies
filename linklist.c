#include<stdio.h>
#include<stdlib.h>
typedef struct item{
    int data;
    struct item *next;
}node;

void append(node**head,int num){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=num;
    newNode->next=NULL;
    if(*head==NULL){
        *head=newNode;
    }
    else{
       node *currentNode=*head;
       while(currentNode->next!=NULL){
        currentNode=currentNode->next;
       }
       currentNode->next=newNode;
    }
}

void printList(node* head) {
  node* currentNode = head;

  while (currentNode != NULL) {
    printf("%d ", currentNode->data);
    currentNode = currentNode->next;
  }
  printf("\n");
}
void removeNode(node **head,int val){
    node *currentNode;
    node *prevNode;
    if(*head==NULL){
        return;
    }

    prevNode=*head;
    currentNode=prevNode->next;
        
    if(prevNode->data==val){
        *head=currentNode;
        free(prevNode);
    
    }
    while(currentNode!=NULL){
        if(currentNode->data==val){
            prevNode->next=currentNode->next;
            free(currentNode);
            break;
        }
        prevNode=currentNode;
        currentNode=currentNode->next;
    }
}



int main(){
    node *head=NULL;
    append(&head,24);
    append(&head,54);
    append(&head,75);
    printList(head);
    
    removeNode(&head,54);

    printList(head);
    
    return 0;
}