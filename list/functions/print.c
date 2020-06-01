
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


void dlist_print(dlist* l)
{
    dlist_node *p = l->head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


void flist_print(flist* l)
{
    flist_node *p = l->head;
    while (p != NULL)
    {
        printf("%f ", p->data);
        p = p->next;
    }
    printf("\n");
}


void clist_print(clist* l)
{
    clist_node *p = l->head;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->next;
    }
    printf("\n");
}


void slist_print(slist* l)
{
    slist_node *p = l->head;
    while (p != NULL)
    {
        printf("%s ", p->data);
        p = p->next;
    }
    printf("\n");
}


