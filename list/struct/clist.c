struct clist_node   {
    char data;
    clist_node *next;
};

struct clist {
    clist_node* head;
    clist_node* tail;
    int count;
};


clist_node *clist_new_node(char data)
{
    clist_node *temp = malloc(sizeof(clist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

