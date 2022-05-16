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

struct node * del_last(struct node *head,int pos)
{
    struct node* temp,*ptr,*next;
    ptr = head;
    pos--;
    pos--;
    while (pos>0)
    {
        ptr = ptr->link;
        pos--;
    }
    next = ptr->link->link;
    temp = ptr->link;
    ptr->link = next;
    temp->link = NULL;
    free(temp);
    temp = NULL;
    return head;
    
    
    
}


int main()
{
    struct node *head,*second;
    head = creat(head,11);
    second = add_end(head,12);
    second = add_end(second,13);
    second = add_end(second,14);
    second = add_end(second,15);
    second = add_end(second,16);
    
   head = del_last(head,2);
   head = del_last(head,2);
   head = del_last(head,2);
    
    travers(head);

}