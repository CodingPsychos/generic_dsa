#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"
double_list dl;

void main() {
dl = import_double_list();

dlist* dlins = dl.create();
dl.push(dlins,1);
dl.push(dlins,2);
dl.push(dlins,3);
dl.push(dlins,4);
dl.push(dlins,5);
dl.print(dlins);
dl.add(dlins,0);
dl.add(dlins,-1);
dl.add(dlins,-2);
dl.add(dlins,-3);
dl.add(dlins,-4);
dl.print(dlins);
}