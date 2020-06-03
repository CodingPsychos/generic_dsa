typedef struct int_listf int_listf;
typedef struct double_listf double_listf;
typedef struct float_listf float_listf;
typedef struct char_listf char_listf;
typedef struct string_listf string_listf;

struct int_listf {
    int_list* (*create)();
    void (*print)(int_list*);
    void (*print_in_reverse)(int_list*);
    void (*push)(int_list*, int data);
    void (*add)(int_list*, int data);
    int (*pop)(int_list* tail);
    int (*remove)(int_list*);
    void (*reverse)(int_list*);
    void (*insert)(int_list*, int,int);
    int (*delete)(int_list*,int);
};

struct double_listf {
    double_list* (*create)();
    void (*print)(double_list*);
    void (*print_in_reverse)(double_list*);
    void (*push)(double_list*, double data);
    void (*add)(double_list*, double data);
    double (*pop)(double_list* tail);
    double (*remove)(double_list*);
    void (*reverse)(double_list*);
    void (*insert)(double_list*, int,double);
    int (*delete)(double_list*,int);
};

struct float_listf {
    float_list* (*create)();
    void (*print)(float_list*);
    void (*print_in_reverse)(float_list*);
    void (*push)(float_list*, float data);
    void (*add)(float_list*, float data);
    float (*pop)(float_list* tail);
    float (*remove)(float_list*);
    void (*reverse)(float_list*);
    void (*insert)(float_list*, int,float);
    int (*delete)(float_list*,int);
};

struct char_listf {
    char_list* (*create)();
    void (*print)(char_list*);
    void (*print_in_reverse)(char_list*);
    void (*push)(char_list*, char data);
    void (*add)(char_list*, char data);
    char (*pop)(char_list* tail);
    char (*remove)(char_list*);
    void (*reverse)(char_list*);
    void (*insert)(char_list*, int,char);
    int (*delete)(char_list*,int);
};

struct string_listf {
    string_list* (*create)();
    void (*print)(string_list*);
    void (*print_in_reverse)(string_list*);
    void (*push)(string_list*, char* data);
    void (*add)(string_list*, char* data);
    char* (*pop)(string_list* tail);
    char* (*remove)(string_list*);
    void (*reverse)(string_list*);
    void (*insert)(string_list*, int,char*);
    int (*delete)(string_list*,int);
};

double_listf import_double_listf();
int_listf import_int_listf();
float_listf import_float_listf();
char_listf import_char_listf();
string_listf import_string_listf();
