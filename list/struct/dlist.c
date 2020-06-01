struct dlist_node   {
    double data;
    dlist_node *next;
};

struct dlist {
    dlist_node* head;
    dlist_node* tail;
    int count;
};


dlist_node *dlist_new_node(double data)
{
    dlist_node *temp = malloc(sizeof(dlist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void dlist_clear(dlist* l) 
{ 
   dlist_node* current = l->head; 
   dlist_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

double dlist_data(dlist* l,int n)    {
    if(n < l->count) {
        dlist_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}

