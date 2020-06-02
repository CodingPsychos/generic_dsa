struct ilist_node   {
    int data;
    ilist_node *next;
};

struct ilist {
    ilist_node* head;
    ilist_node* tail;
    int count;
};

ilist_node *ilist_new_node(int data)
{
    ilist_node *temp = malloc(sizeof(ilist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}


void ilist_clear(ilist* l) 
{ 
   ilist_node* current = l->head; 
   ilist_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

int ilist_data(ilist* l,int n)    {
    if(n < l->count) {
        ilist_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}

