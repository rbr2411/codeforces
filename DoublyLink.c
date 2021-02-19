#include<stdio.h>
struct DoublyLink
{
    int data;
    DoublyLink *next;
    DoublyLink *prev;
};
void printlist(DoublyLink *temp)
{
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main()
{
    DoublyLink *head = NULL;
    int n;
    scanf("%d",&n);
    DoublyLink *p[n];
    for(int i=0; i<n;i++){
        p[i] = new DoublyLink;
    }
    for(int i =0; i<n-1;i++){
        p[i] ->data = i;
        p[i] ->next = p[i+1] -> prev;
    }
    p[0] -> prev = NULL;
    p[n-1] = new DoublyLink;
    p[n-1] -> data = n-1;
    p[n-1] -> next = NULL;
    head = p[0];
    printlist(head);
}