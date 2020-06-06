void double_heap_down(double_heap* h, int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  int n = *(h->count);
  double* heap = h->heap;
  char* type = h->type;
  if(l<n) {
		if((r<n) && (comparator(heap[r], heap[l], type))) {
			if(comparator(heap[r], heap[c], type))  {
		  	double_swap(&heap[r],&heap[c]);
		  }
		  double_heap_down(h,r);
		}  	
		else	{
		if(comparator(heap[l], heap[c], type))  {
		  	double_swap(&heap[l], &heap[c]);
		  }
		  double_heap_down(h,l);
		}
	}
	else
		return;		
}