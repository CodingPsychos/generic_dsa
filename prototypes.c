typedef struct ilist_node ilist_node;
typedef struct ilist ilist;

typedef struct dlist_node dlist_node;
typedef struct dlist dlist;

typedef struct flist_node flist_node;
typedef struct flist flist;

typedef struct clist_node clist_node;
typedef struct clist clist;

typedef struct slist_node slist_node;
typedef struct slist slist;

typedef struct int_list int_list;
typedef struct double_list double_list;
typedef struct float_list float_list;
typedef struct char_list char_list;
typedef struct string_list string_list;

dlist* create_dlist();
ilist* create_ilist();
flist* create_flist();
clist* create_clist();
slist* create_slist();

double_list import_double_list();
int_list import_int_list();
float_list import_float_list();
char_list import_char_list();
string_list import_string_list();

ilist_node* ilist_new_node(int);
void ilist_print(ilist*);
void ilist_print_in_reverse(ilist*);
void ilist_print_in_reverve_recursive_part(ilist_node* head);
void ilist_push(ilist*, int data);
void ilist_shift(ilist*, int data);
int ilist_pop(ilist* tail);
int ilist_unshift(ilist*);
void ilist_reverse(ilist*);
void ilist_insert(ilist*, int,int);
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
void dlist_insert(dlist*, int,double);
double dlist_delete(dlist* ,int);

flist_node* flist_new_node(float data);
void flist_print(flist*);
void flist_print_in_reverse(flist*);
void flist_print_in_reverve_recursive_part(flist_node* head);
void flist_push(flist*,float data);
void flist_shift(flist*, float data);
float flist_pop(flist* tail);
float flist_unshift(flist*);
void flist_reverse(flist*);
void flist_insert(flist*, int,float);
float flist_delete(flist* ,int);

clist_node* clist_new_node(char data);
void clist_print(clist*);
void clist_print_in_reverse(clist*);
void clist_print_in_reverve_recursive_part(clist_node* head);
void clist_push(clist*, char data);
void clist_shift(clist*, char data);
char clist_pop(clist* tail);
char clist_unshift(clist*);
void clist_reverse(clist*);
void clist_insert(clist*, int,char);
char clist_delete(clist* ,int);

slist_node* slist_new_node(char* data);
void slist_print(slist*);
void slist_print_in_reverse(slist*);
void slist_print_in_reverve_recursive_part(slist_node* head);
void slist_push(slist*, char* data);
void slist_shift(slist*, char* data);
char* slist_pop(slist* tail);
char* slist_unshift(slist*);
void slist_reverse(slist*);
void slist_insert(slist*, int,char*);
char* slist_delete(slist* ,int);
