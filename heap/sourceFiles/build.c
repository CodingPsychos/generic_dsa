void double_heap_build(double_heap* h)	{
    int n = *(h->count);
    for (int i = n/2-1; i >= 0; i--) 
        double_heap_down(h, i);
}
