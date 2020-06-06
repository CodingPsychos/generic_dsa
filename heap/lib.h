typedef struct int_heapf int_heapf;
typedef struct double_heapf double_heapf;
typedef struct float_heapf float_heapf;
typedef struct char_heapf char_heapf;
typedef struct string_heapf string_heapf;

struct double_heapf  {
double_heap* (*create)(double*, int*, char*);
void (*up)(double_heap*, int);
void (*down)(double_heap*, int);
void (*build)(double_heap*);
void (*push)(double_heap*, double);
double (*pop)(double_heap*);
void (*print)(double_heap*);
};

struct int_heapf  {
int_heap* (*create)(int*, int*, char*);
void (*up)(int_heap*, int);
void (*down)(int_heap*, int);
void (*build)(int_heap*);
void (*push)(int_heap*, int);
int (*pop)(int_heap*);
void (*print)(int_heap*);
};

struct float_heapf  {
float_heap* (*create)(float*, int*, char*);
void (*up)(float_heap*, int);
void (*down)(float_heap*, int);
void (*build)(float_heap*);
void (*push)(float_heap*, float);
float (*pop)(float_heap*);
void (*print)(float_heap*);
};
struct char_heapf  {
char_heap* (*create)(char*, int*, char*);
void (*up)(char_heap*, int);
void (*down)(char_heap*, int);
void (*build)(char_heap*);
void (*push)(char_heap*, char);
char (*pop)(char_heap*);
void (*print)(char_heap*);
};

double_heapf import_double_heapf();
int_heapf import_int_heapf();
char_heapf import_char_heapf();
float_heapf import_float_heapf();
