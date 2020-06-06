double_heap* double_heap_create(double* heap, int* count, char* type)   {
    double_heap* h = (double_heap*)malloc(sizeof(double_heap));
    h->heap = heap;
    h->count = count;
    h->type = type;
}
