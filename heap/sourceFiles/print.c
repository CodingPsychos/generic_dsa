void double_heap_print(double_heap* h)  {
	for(int i=0; i<*(h->count); i++) {
		printf("%lf ",(h->heap)[i]);
	}
	printf("\n");
}

