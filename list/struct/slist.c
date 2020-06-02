struct slist_node   {
    char* data;
    slist_node *next;
};

struct slist {
    slist_node* head;
    slist_node* tail;
    int count;
};


slist_node *slist_new_node(char* data)
{
    slist_node *temp = malloc(sizeof(slist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

