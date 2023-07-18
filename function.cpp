#include"header.h"
#include"function.h"
struct node
{
    int data;
    struct node *next;
} * start;

struct node *create_node(void)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    return ptr;
}


void transverse(struct node *start)
{
    struct node *p;
    p = create_node();
    p = start;

    while (p != NULL)
    {
        printf("element is : %d\n", p->data);
        p = p->next;
    }
}


void add_beg(struct node *start,int val)
{
    if (start == NULL)
    {
        start = create_node();

        start->data = val;
        start->next = NULL;
    }
    else
    {
        struct node *p;
        p = create_node();

        p->data = val;
        p->next = start;
        start = p;
    }
}


void add_at_end(struct node *start,int val)
{
    if(start==NULL)
    {
        add_beg(start,val);
    }
    else
    {
       struct node*p;
       struct node*r;
       r=create_node();
       p=create_node();
       p=start;
       while(p->next!=NULL)
       {
        p=p->next;
       }
       p->next=r;
       r->data=val;
       r->next=NULL;

    }
}


void del_beg(struct node *start)
{
    struct node *p;

    if (start != NULL)
    {
        p = create_node();
        p = start;
        start = p->next;
        start->data = p->next->data;
        start->next = p->next->next;
        free(p);
    }
}


void insert_at_mid(struct node *start,int val)
{
    struct node *p;
    p = create_node();
    struct node *q;
    q = create_node();
    struct node *r;
    struct node *b;
    b = create_node();
    r = create_node();
    b = start;
    p = start;
    q = start->next;
    int size = 0;
    int c = 0;
    if (start != NULL)
    {
        if (start->next != NULL)
        {
            while (b != NULL)
            {
                b = b->next;
                size++;
            }
            if (size % 2 == 0)
            {
                c = size / 2;
            }
            else
            {
                c = (size + 1) / 2;
            }

            for (int i = 1; i < c; i++)
            {
                p = p->next;
                q = q->next;
            }
            r->data = val;
            p->next = r;
            r->next = q;
        }
    }
}


void del_mid(struct node *start)
{
    struct node *p;
    struct node *q;
    struct node *r;
    int size = 0;
    int c = 0;
    if (start != NULL)
    {
        q = create_node();
        q = start;
        r = create_node();
        r = start->next;
        p = create_node();
        p = start;
        if ((q->next) != NULL)
        {
            while (q != NULL)
            {
                q = q->next;
                size++;
            }

            if (size % 2 == 0)
            {
                c = size / 2;
            }
            else
            {
                c = (size + 1) / 2;
            }

            for (int j = 1; j < (c - 1); j++)
            {
                r = r->next;
                p = p->next;
            }
            p->next = r->next;
            free(r);
        }
    }
}
void print_beg(struct node *start,int i)
{
    struct node *p;
    p = create_node();
    p = start;
    int j=1;
    while (p != NULL || (j>i))
    {
        if(i==j)
        {
        printf("element is : %d\n", p->data);
        break;
        }
        p = p->next;
        j++;
    }
}
void size(struct node* start)
{
   struct node *p;
    p = create_node();
    p = start;
    int i=0;
    while (p != NULL)
    {
        printf("element is : %d\n", p->data);
        p = p->next;
        i++;
    } 
    printf("current size of linear linked list is %d",i);
}
