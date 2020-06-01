struct flist_node   {
    float data;
    flist_node *next;
};

struct flist {
    flist_node* head;
    flist_node* tail;
    int count;
};

flist_node *flist_new_node(float data)
{
    flist_node *temp = malloc(sizeof(flist_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}



