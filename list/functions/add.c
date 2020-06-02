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

void flist_shift(flist* l, float data)
{
    if ((l->head) == NULL)
    {
        (l->head) = flist_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        flist_node *p = flist_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

void clist_shift(clist* l, char data)
{
    if ((l->head) == NULL)
    {
        (l->head) = clist_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        clist_node *p = clist_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

void slist_shift(slist* l, char* data)
{
    if ((l->head) == NULL)
    {
        (l->head) = slist_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        slist_node *p = slist_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

