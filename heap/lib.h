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

double_heapf import_double_heapf();