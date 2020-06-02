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

float flist_unshift(flist* l)
{
    float res = 0;
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

char clist_unshift(clist* l)
{
    char res = 0;
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

char* slist_unshift(slist* l)
{
    char* res = 0;
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


