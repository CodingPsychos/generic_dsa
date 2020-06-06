

double_heapf import_double_heapf()   {
    double_heapf h;
    h.create =  double_heap_create;
    h.up     =  double_heap_up;
    h.down   =  double_heap_down;
    h.build  =  double_heap_build;
    h.push   =  double_heap_push;
    h.pop    =  double_heap_pop;
    h.print  =  double_heap_print;
    return h;
}

int_heapf import_int_heapf()   {
    int_heapf h;
    h.create =  int_heap_create;
    h.up     =  int_heap_up;
    h.down   =  int_heap_down;
    h.build  =  int_heap_build;
    h.push   =  int_heap_push;
    h.pop    =  int_heap_pop;
    h.print  =  int_heap_print;
    return h;
}

float_heapf import_float_heapf()   {
    float_heapf h;
    h.create =  float_heap_create;
    h.up     =  float_heap_up;
    h.down   =  float_heap_down;
    h.build  =  float_heap_build;
    h.push   =  float_heap_push;
    h.pop    =  float_heap_pop;
    h.print  =  float_heap_print;
    return h;
}

char_heapf import_char_heapf()   {
    char_heapf h;
    h.create =  char_heap_create;
    h.up     =  char_heap_up;
    h.down   =  char_heap_down;
    h.build  =  char_heap_build;
    h.push   =  char_heap_push;
    h.pop    =  char_heap_pop;
    h.print  =  char_heap_print;
    return h;
}
