struct dlist_node   {
    double data;
    dlist_node *next;
};

struct dlist {
    dlist_node* head;
    dlist_node* tail;
    int count;
};



struct double_list {
    dlist* (*create)();
    void (*print)(dlist*);
    void (*print_in_reverse)(dlist*);
    void (*push)(dlist*, double data);
    void (*add)(dlist*, double data);
    double (*pop)(dlist* tail);
    double (*remove)(dlist*);
    void (*reverse)(dlist*);
    void (*insert)(dlist*, int,double);
    double (*delete)(dlist*,int);
};

double_list import_double_list() {
    double_list l;
    l.print= dlist_print;
    l.print_in_reverse = dlist_print_in_reverse;
    l.push = dlist_push;
    l.add = dlist_shift;
    l.pop= dlist_pop; 
    l.remove = dlist_unshift;
    l.reverse = dlist_reverse;
    l.insert = dlist_insert;
    l.delete= dlist_delete;
    l.create = create_dlist;
return l;
}

dlist* create_dlist() {
    dlist* l = malloc(sizeof(dlist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}
dlist_node *dlist_new_node(double data)
{
    dlist_node *temp = malloc(sizeof(dlist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void dlist_print(dlist* l)
{
    dlist_node *p = l->head;
    while (p != NULL)
    {
        printf("%lf ", p->data);
        p = p->next;
    }
    printf("\n");
}

void dlist_print_in_reverse(dlist* l)
{
    dlist_print_in_reverve_recursive_part(l->head);
}

void dlist_print_in_reverve_recursive_part(dlist_node* head)  {
    if (head == NULL)
        return;
    dlist_print_in_reverve_recursive_part(head->next);
    printf("%lf  ", head->data);
}

void dlist_push(dlist* l, double data)
{
    dlist_node *new_node = dlist_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

double dlist_pop(dlist* l)
{
    double res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        dlist_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}

void dlist_shift(dlist* l, double data)
{
    if ((l->head) == NULL)
    {
        (l->head) = dlist_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        dlist_node *p = dlist_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

double dlist_unshift(dlist* l)
{
    double res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

void dlist_insert(dlist* l, int p, double n)
{
    dlist_node *temp = l->head;
    dlist_node *new_node = dlist_new_node(n);
    int count = 0;
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->data;
    (l->count)++;
}

double dlist_delete(dlist* l, int p)
{
    dlist_node *temp = l->head;
    int count = 1;
    if (p == 1)
        dlist_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}

void dlist_reverse(dlist* l)
{
    dlist_node *currn = (l->head);
    dlist_node *prevn = NULL;
    dlist_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}

void dlist_clear(dlist* l) 
{ 
   dlist_node* current = l->head; 
   dlist_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

double dlist_data(dlist* l,int n)    {
    if(n < l->count) {
        dlist_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}

