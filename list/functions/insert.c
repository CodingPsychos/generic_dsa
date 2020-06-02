
void ilist_insert(ilist* l, int p, int n)
{
    ilist_node *temp = l->head;
    ilist_node *new_node = ilist_new_node(n);
    int count = 0;
    if(p==1)
	    ilist_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void dlist_insert(dlist* l, int p, double n)
{
    dlist_node *temp = l->head;
    dlist_node *new_node = dlist_new_node(n);
    int count = 0;
  if(p==1)
	  dlist_shift(l,n);
  else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void flist_insert(flist* l, int p, float n)
{
    flist_node *temp = l->head;
    flist_node *new_node = flist_new_node(n);
    int count = 0;
    if(p==1)
	    flist_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void clist_insert(clist* l, int p, char n)
{
    clist_node *temp = l->head;
    clist_node *new_node = clist_new_node(n);
    int count = 0;
    if(p==1)
	    clist_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void slist_insert(slist* l, int p, char* n)
{
    slist_node *temp = l->head;
    slist_node *new_node = slist_new_node(n);
    int count = 0;
    if(p==1)
	    slist_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}
