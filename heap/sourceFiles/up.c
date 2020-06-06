void double_heap_up(double_heap* dh, int c)  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(comparator(dh->heap[c],dh->heap[p], dh->type))
		double_swap(&dh->heap[c],&dh->heap[p]);
	double_heap_up(dh, p);
}