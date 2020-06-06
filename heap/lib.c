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