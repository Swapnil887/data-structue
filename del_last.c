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

struct node * del_last(struct node *head)
{
    struct node *temp,*next;
    
    temp = head;
    while(temp->link->link != NULL)
    {
        temp = temp->link;
    }
    next = temp->link;
    temp->link= NULL;
    free(next);
    next  = NULL;
    return head;
}

int main()
{
    struct node *head,*second;
    head = creat(head,1);
    second = add_end(head,2);
    second = add_end(second,3);
    second = add_end(second,4);
    second = add_end(second,5);
    second = add_end(second,6);
    
    head = del_last(head);
    
    travers(head);

}