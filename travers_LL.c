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

struct node * add_end(struct node *head,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    
    struct node *ptr;
    ptr  = head;
    while(ptr->link !=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link = temp;
    return head;
}

void travers(struct node *head)
{
    struct node*ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }

    
}

int main()
{
    struct node *head,*second;
    head = creat(head,1);
    second = add_end(head,2);
    second = add_end(second,3);
    second = add_end(second,4);
    second = add_end(second,5);
    

    travers(head);

}