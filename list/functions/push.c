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

void flist_push(flist* l, float data)
{
    flist_node *new_node = flist_new_node(data);

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

void clist_push(clist* l, char data)
{
    clist_node *new_node = clist_new_node(data);

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

void slist_push(slist* l, char* data)
{
    slist_node *new_node = slist_new_node(data);

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






