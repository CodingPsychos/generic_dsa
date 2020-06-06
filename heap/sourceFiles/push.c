void double_heap_push(double_heap* h, double data)  {
  h->heap[(*(h->count))++] = data;
  double_heap_up(h, (*h->count)-1);
}
