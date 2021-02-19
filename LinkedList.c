#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    node *next;
};

node* insertAtBegin(node *temp,int data);
void insertAtEnd(node *temp,int data);
void insertAfterGiven(node *temp, int data);
void printlist(node *temp)
{
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

node* insertAtBegin(node *temp,int data){
  node *root = new node;
  root->data = data;
  root->next = temp;
  return root;
}

void insertAfterGiven(node *temp, int data){
    node *root = new node;
    root ->data = data;
    root->next = temp->next;
    temp->next = root;
}

void insertAtEnd(node *temp,int data){
    node *root = new node;
    root->data = data;
    root->next = NULL;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = root;
}
int main()
{
    node *head = NULL;
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;
    head = (node*)malloc(sizeof(struct node));
    first = (node*)malloc(sizeof(struct node));
    second = (node*)malloc(sizeof(struct node));
    third = new node;
    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 6;
    second ->next = third;

    third->data = 12;
    third->next = NULL;

    printlist(head);
    node **temp = &head;
    head = insertAtBegin(head,0);
    insertAfterGiven(second,3);
    insertAtEnd(head,15);
    printf("==================\n");
    printlist(head);
}
