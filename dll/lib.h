typedef struct int_dllf int_dllf;
typedef struct double_dllf double_dllf;
typedef struct float_dllf float_dllf;
typedef struct char_dllf char_dllf;
typedef struct string_dllf string_dllf;

struct int_dllf{
    int_dll* (*create)();
    void (*print)(int_dll*);
    void (*print_in_reverse)(int_dll*);
    void (*push)(int_dll*, int data);
    void (*add)(int_dll*, int data);
    int (*pop)(int_dll* tail);
    int (*remove)(int_dll*);
    void (*reverse)(int_dll*);
    void (*insert)(int_dll*, int,int);
    int (*delete)(int_dll*,int);
};

struct double_dllf {
    double_dll* (*create)();
    void (*print)(double_dll*);
    void (*print_in_reverse)(double_dll*);
    void (*push)(double_dll*, double data);
    void (*add)(double_dll*, double data);
    double (*pop)(double_dll* tail);
    double (*remove)(double_dll*);
    void (*reverse)(double_dll*);
    void (*insert)(double_dll*, int,double);
    double (*delete)(double_dll*,int);
};

struct float_dllf {
    float_dll* (*create)();
    void (*print)(float_dll*);
    void (*print_in_reverse)(float_dll*);
    void (*push)(float_dll*, float data);
    void (*add)(float_dll*, float data);
    float (*pop)(float_dll* tail);
    float (*remove)(float_dll*);
    void (*reverse)(float_dll*);
    void (*insert)(float_dll*, int,float);
    float (*delete)(float_dll*,int);
};

struct char_dllf {
    char_dll* (*create)();
    void (*print)(char_dll*);
    void (*print_in_reverse)(char_dll*);
    void (*push)(char_dll*, char data);
    void (*add)(char_dll*, char data);
    char (*pop)(char_dll* tail);
    char (*remove)(char_dll*);
    void (*reverse)(char_dll*);
    void (*insert)(char_dll*, int,char);
    char (*delete)(char_dll*,int);
};

struct string_dllf {
    string_dll* (*create)();
    void (*print)(string_dll*);
    void (*print_in_reverse)(string_dll*);
    void (*push)(string_dll*, char* data);
    void (*add)(string_dll*, char* data);
    char* (*pop)(string_dll* tail);
    char* (*remove)(string_dll*);
    void (*reverse)(string_dll*);
    void (*insert)(string_dll*, int,char*);
    char* (*delete)(string_dll*,int);
};

double_dllf import_double_dllf();
int_dllf import_int_dllf();
float_dllf import_float_dllf();
char_dllf import_char_dllf();
string_dllf import_string_dllf();
