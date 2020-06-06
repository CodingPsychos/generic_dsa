double double_heap_pop(double_heap* h)  {
	double temp = (h->heap)[0];
    int* n = (h->count);
	(h->heap)[0] = (h->heap)[(*n)-1];
	(*n)--;
	double_heap_down(h,0);
	return temp;
}