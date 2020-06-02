
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


void flist_reverse(flist* l)
{
    flist_node *currn = (l->head);
    flist_node *prevn = NULL;
    flist_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void clist_reverse(clist* l)
{
    clist_node *currn = (l->head);
    clist_node *prevn = NULL;
    clist_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void slist_reverse(slist* l)
{
    slist_node *currn = (l->head);
    slist_node *prevn = NULL;
    slist_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


