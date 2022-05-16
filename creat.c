#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node * creat(struct node *head,int data)
{
    head = (struct node*)malloc(sizeof(struct node));
    head->data = data;
    head->link = NULL;
    return head;
}

int main()
{
    struct node *head;
    head = creat(head,1);
    printf("%d",head->data);
}