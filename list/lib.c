
struct int_list {
    ilist* (*create)();
    void (*print)(ilist*);
    void (*print_in_reverse)(ilist*);
    void (*push)(ilist*, int data);
    void (*add)(ilist*, int data);
    int (*pop)(ilist* tail);
    int (*remove)(ilist*);
    void (*reverse)(ilist*);
    void (*insert)(ilist*, int,int);
    int (*delete)(ilist*,int);
};

int_list import_int_list() {
    int_list l;
    l.print= ilist_print;
    l.print_in_reverse = ilist_print_in_reverse;
    l.push = ilist_push;
    l.add = ilist_shift;
    l.pop= ilist_pop; 
    l.remove = ilist_unshift;
    l.reverse = ilist_reverse;
    l.insert = ilist_insert;
    l.delete= ilist_delete;
    l.create = create_ilist;
    return l;
}

struct double_list {
    dlist* (*create)();
    void (*print)(dlist*);
    void (*print_in_reverse)(dlist*);
    void (*push)(dlist*, double data);
    void (*add)(dlist*, double data);
    double (*pop)(dlist* tail);
    double (*remove)(dlist*);
    void (*reverse)(dlist*);
    void (*insert)(dlist*, int,double);
    int (*delete)(dlist*,int);
};

double_list import_double_list() {
    double_list l;
    l.print= dlist_print;
    l.print_in_reverse = dlist_print_in_reverse;
    l.push = dlist_push;
    l.add = dlist_shift;
    l.pop= dlist_pop; 
    l.remove = dlist_unshift;
    l.reverse = dlist_reverse;
    l.insert = dlist_insert;
    l.delete= dlist_delete;
    l.create = create_dlist;
return l;
}


struct float_list {
    flist* (*create)();
    void (*print)(flist*);
    void (*print_in_reverse)(flist*);
    void (*push)(flist*, float data);
    void (*add)(flist*, float data);
    float (*pop)(flist* tail);
    float (*remove)(flist*);
    void (*reverse)(flist*);
    void (*insert)(flist*, int,float);
    int (*delete)(flist*,int);
};

float_list import_float_list() {
    float_list l;
    l.print= flist_print;
    l.print_in_reverse = flist_print_in_reverse;
    l.push = flist_push;
    l.add = flist_shift;
    l.pop= flist_pop; 
    l.remove = flist_unshift;
    l.reverse = flist_reverse;
    l.insert = flist_insert;
    l.delete= flist_delete;
    l.create = create_flist;
return l;
}

struct char_list {
    clist* (*create)();
    void (*print)(clist*);
    void (*print_in_reverse)(clist*);
    void (*push)(clist*, char data);
    void (*add)(clist*, char data);
    char (*pop)(clist* tail);
    char (*remove)(clist*);
    void (*reverse)(clist*);
    void (*insert)(clist*, int,char);
    int (*delete)(clist*,int);
};

char_list import_char_list() {
    char_list l;
    l.print= clist_print;
    l.print_in_reverse = clist_print_in_reverse;
    l.push = clist_push;
    l.add = clist_shift;
    l.pop= clist_pop; 
    l.remove = clist_unshift;
    l.reverse = clist_reverse;
    l.insert = clist_insert;
    l.delete= clist_delete;
    l.create = create_clist;
return l;
}

struct string_list {
    slist* (*create)();
    void (*print)(slist*);
    void (*print_in_reverse)(slist*);
    void (*push)(slist*, char* data);
    void (*add)(slist*, char* data);
    char* (*pop)(slist* tail);
    char* (*remove)(slist*);
    void (*reverse)(slist*);
    void (*insert)(slist*, int,char*);
    int (*delete)(slist*,int);
};

string_list import_string_list() {
    string_list l;
    l.print= slist_print;
    l.print_in_reverse = slist_print_in_reverse;
    l.push = slist_push;
    l.add = slist_shift;
    l.pop= slist_pop; 
    l.remove = slist_unshift;
    l.reverse = slist_reverse;
    l.insert = slist_insert;
    l.delete= slist_delete;
    l.create = create_slist;
return l;
}

