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


void flist_print_in_reverse(flist* l)
{
    flist_print_in_reverve_recursive_part(l->head);
}

void flist_print_in_reverve_recursive_part(flist_node* head)  {
    if (head == NULL)
        return;
    flist_print_in_reverve_recursive_part(head->next);
    printf("%f  ", head->data);
}

void clist_print_in_reverse(clist* l)
{
    clist_print_in_reverve_recursive_part(l->head);
}

void clist_print_in_reverve_recursive_part(clist_node* head)  {
    if (head == NULL)
        return;
    clist_print_in_reverve_recursive_part(head->next);
    printf("%c  ", head->data);
}


void slist_print_in_reverse(slist* l)
{
      	slist_print_in_reverve_recursive_part(l->head);
}
void slist_print_in_reverve_recursive_part(slist_node* head)  {

    if (head == NULL)
        return;
    slist_print_in_reverve_recursive_part(head->next);
    printf("%s  ", head->data);
}


