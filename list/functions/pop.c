
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


float flist_pop(flist* l)
{
    float res = 0;
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
        flist_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


char clist_pop(clist* l)
{
    char res = 0;
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
        clist_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


char* slist_pop(slist* l)
{
    char* res = 0;
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
        slist_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


