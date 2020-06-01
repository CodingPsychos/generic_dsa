#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"
string_list dl;

void main() {
dl = import_string_list();

slist* dlins = dl.create();
dl.push(dlins,"hari");
dl.push(dlins,"haran");
dl.push(dlins,"ramanathan");
dl.push(dlins,"karpagavalli");
dl.push(dlins,"rishi");
dl.add(dlins,"family");
//dl.print(dlins);
//dl.pop(dlins);
//dl.remove(dlins);
//dl.reverse(dlins);
dl.insert(dlins,1,"rishi");
//dl.delete(dlins,1);
printf("\n");
dl.print(dlins);
printf("\n");

}
