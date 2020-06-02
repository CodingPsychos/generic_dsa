
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
int dlist_delete(dlist* l, int p)
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
int flist_delete(flist* l, int p)
{
    flist_node *temp = l->head;
    int count = 1;
    if (p == 1)
        flist_unshift(l);
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
int clist_delete(clist* l, int p)
{
    clist_node *temp = l->head;
    int count = 1;
    if (p == 1)
        clist_unshift(l);
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
int slist_delete(slist* l, int p)
{
    slist_node *temp = l->head;
    int count = 1;
    if (p == 1)
        slist_unshift(l);
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
