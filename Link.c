#include <stdio.h>
#include<stdlib.h>
struct LinkNode
{
    int data;
    LinkNode *next;
};

LinkNode* insertAtBegin(LinkNode *temp,int data);
void insertAtEnd(LinkNode *temp,int data);
void insertAfterGiven(LinkNode *temp,int position, int data);
LinkNode *removeFromStart(LinkNode* temp);
void removeLast(LinkNode *temp);
void removeAfterGiven(LinkNode *temp,int position);
void printlist(LinkNode *temp)
{
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

LinkNode* insertAtBegin(LinkNode *temp,int data){
  LinkNode *root = new LinkNode;
  root->data = data;
  root->next = temp;
  return root;
}

void insertAfterGiven(LinkNode *temp,int position, int data){
    LinkNode *root = new LinkNode;
    root ->data = data;
    position--;
    while(position--){
        temp = temp->next;
    }
    root->next = temp->next;
    temp->next = root;
}

void insertAtEnd(LinkNode *temp,int data){
    LinkNode *root = new LinkNode;
    root->data = data;
    root->next = NULL;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = root;
}

//Delete methods
LinkNode *removeFromStart(LinkNode* temp){
    LinkNode *root = temp->next;
    free(temp);
    return root;
}

void removeLast(LinkNode *temp){
    while (temp->next->next!= NULL)
    {
        temp = temp -> next;
    }
    LinkNode *root = temp->next;
    temp -> next = NULL;
    free(root);
}

void removeAfterGiven(LinkNode *temp,int position){
    position--;
    while(position--){
        temp = temp->next;
    }
    //now arrived at required position
    LinkNode *current = temp ->next;
    LinkNode *root = current ->next;
    free(current);
    temp->next = root;
}

int main()
{
   int n;
   scanf("%d",&n);
   LinkNode *head = NULL;
   LinkNode *p[n];
   for(int i=0;i<n;i++){
          p[i] = new LinkNode;
         
   }
   for(int i=0;i<n-1;i++){
        p[i]->data = i;
          p[i]->next = p[i+1];
   }
   p[n-1]->data = n-1;
   p[n-1]->next = NULL;
   head = p[0];
   printlist(head);
    
    head = insertAtBegin(head,0);
    insertAfterGiven(head,4,3);
    insertAtEnd(head,15);
    printf("==================\n");
    printlist(head);

    printf("==================\n");
    head = removeFromStart(head);
    removeLast(head);
    
    removeAfterGiven(head,3);
    
    printlist(head);
}
