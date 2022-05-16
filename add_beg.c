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

struct node * add_beg(struct node *head,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}

int main()
{
    struct node *head;
    head = creat(head,1);
    head = add_beg(head,2);
    head = add_beg(head,3);
    head = add_beg(head,4);

    struct node*ptr;
    ptr = head;
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }

}