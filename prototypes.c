typedef struct ilist_node ilist_node;
typedef struct ilist ilist;

typedef struct dlist_node dlist_node;
typedef struct dlist dlist;

ilist_node* ilist_new_node(int data);
void ilist_print(ilist*);
void ilist_print_in_reverse(ilist*);
void ilist_print_in_reverve_recursive_part(ilist_node* head);
void ilist_push(ilist*, int data);
void ilist_shift(ilist*, int data);
int ilist_pop(ilist* tail);
int ilist_unshift(ilist*);
void ilist_reverse(ilist*);
int ilist_insert(ilist*, int,int);
int ilist_delete(ilist*,int);

dlist_node* dlist_new_node(double data);
void dlist_print(dlist*);
void dlist_print_in_reverse(dlist*);
void dlist_print_in_reverve_recursive_part(dlist_node* head);
void dlist_push(dlist*, double data);
void dlist_shift(dlist*, double data);
double dlist_pop(dlist* tail);
double dlist_unshift(dlist*);
void dlist_reverse(dlist*);
int dlist_insert(dlist*, int,double);
int dlist_delete(dlist*,int);