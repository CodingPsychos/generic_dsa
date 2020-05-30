struct ilist_node   {
    int data;
    ilist_node *next;
};

struct ilist {
    ilist_node* head;
    ilist_node* tail;
    int count;
};

ilist* create_ilist() {
    ilist* l = malloc(sizeof(ilist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}

ilist_node *ilist_new_node(int data)
{
    ilist_node *temp = malloc(sizeof(ilist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void ilist_print(ilist* l)
{
    ilist_node *p = l->head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void ilist_print_in_reverse(ilist* l)
{
    ilist_print_in_reverve_recursive_part(l->head);
}

void ilist_print_in_reverve_recursive_part(ilist_node* head)  {
    if (head == NULL)
        return;
    ilist_print_in_reverve_recursive_part(head->next);
    printf("%d  ", head->data);
}

void ilist_push(ilist* l, int data)
{
    ilist_node *new_node = ilist_new_node(data);

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

int ilist_pop(ilist* l)
{
    int res = 0;
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
        ilist_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}

void ilist_shift(ilist* l, int data)
{
    if ((l->head) == NULL)
    {
        (l->head) = ilist_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        ilist_node *p = ilist_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

int ilist_unshift(ilist* l)
{
    int res = 0;
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

int ilist_insert(ilist* l, int p, int n)
{
    ilist_node *temp = l->head;
    ilist_node *new_node = ilist_new_node(n);
    int count = 0;
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    return new_node->data;
}

int ilist_delete(ilist* l, int p)
{
    ilist_node *temp = l->head;
    int count = 1;
    if (p == 1)
        ilist_unshift(l);
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

void ilist_reverse(ilist* l)
{
    ilist_node *currn = (l->head);
    ilist_node *prevn = NULL;
    ilist_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}

void ilist_clear(ilist* l) 
{ 
   ilist_node* current = l->head; 
   ilist_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

int ilist_data(ilist* l,int n)    {
    if(n < l->count) {
        ilist_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}

