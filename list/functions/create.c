
ilist* create_ilist() {
    ilist* l = malloc(sizeof(ilist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


dlist* create_dlist() {
    dlist* l = malloc(sizeof(dlist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


flist* create_flist() {
    flist* l = malloc(sizeof(flist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


clist* create_clist() {
    clist* l = malloc(sizeof(clist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


slist* create_slist() {
    slist* l = malloc(sizeof(slist));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


