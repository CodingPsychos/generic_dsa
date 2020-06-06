#include <stdio.h>
#include <stdlib.h>
#include "dsa.h"

double_heapf dh;

void main() {
    dh = import_double_heapf();
    double * p;
    p =(double[9]){8,5,4,7,9,2,6,3,1};
    int n = 9;
    double_heap* h = dh.create(p, &n, "max");

    dh.build(h);
    dh.print(h);
    printf("%lf... ",dh.pop(h));
    dh.print(h);
    printf("%lf... ",dh.pop(h));
    dh.print(h);
    printf("%lf... ",dh.pop(h));
    dh.print(h);
    printf("%lf... ",dh.pop(h));
    dh.print(h);
    printf("%lf... ",dh.pop(h));

}


/*
string_dllf dl;

void main() {
dl = import_string_dllf();

string_dll* dlins = dl.create();
dl.push(dlins,"I");
dl.push(dlins,"need");
dl.push(dlins,"to");
dl.push(dlins,"check");
dl.push(dlins,"this");
dl.add(dlins,"hai");
dl.print(dlins);
dl.pop(dlins);
dl.remove(dlins);
printf("count=%d\n",dlins->count);
dl.reverse(dlins);
//dl.insert(dlins,4,"project");
//dl.delete(dlins,1);
//printf("\n");
dl.print(dlins);
printf("\n");
dl.print_in_reverse(dlins);
}
*/

/* 
void main() {   
    int_list* l = create_int_list(); 
    while(1){
        printf("\na.push\n"
                "b.pop\n"
                "c.shift\n"
                "d.unshift\n"
                "e.insert\n"
                "f.delete\n"
                "g.print\n"
                "h.print in reverse\n"
                "i.reverse int_list\n"
                "j.data\n"
                "q.quit\n"
            );
        char c;
        scanf("\n%c",&c);
        if(c=='q'){
            break;
        }
        else{
            switch(c){

                case 'a':{
                int a;
                printf("Enter the value");
                scanf("%d",&a);
                int_list_push(l,a);
                int_list_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'b':
                int_list_pop(l);
                int_list_print(l);
                printf("count = %d",l->count);
                break;
                
                case 'c':{
                int a;
                printf("Enter the value");
                scanf("%d",&a);
                int_list_shift(l,a);
                int_list_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'd':
                int_list_unshift(l);
                int_list_print(l);
                printf("count = %d",l->count);
                break;
                         
                case 'e':{
                int v;
                int p,n;
                printf("Enter the position");
                scanf("%d",&p);
                printf("Enter the value");
                scanf("%d",&n);
                int_list_insert(l,p,n);
                printf("\n%d Value added",v);
                int_list_print(l);
                break;
                }
                
                case 'f':{
                int v;
                int p;
                printf("Enter the position");
                scanf("%d",&p);
                v=int_list_delete(l,p);
                printf("\n%d position removed",v);
                int_list_print(l);
                break;
                }

                case 'g':
                int_list_print(l);
                break;
                
                case 'h':
                int_list_print_in_reverse(l);
                break;

                case 'i':
                int_list_reverse(l);
                break;

                case 'j':   {
                int n;
                printf("Enter the position\n");
                scanf("%d",&n);
                printf("%d",int_list_data(l,n));
                break;
                }
                default:printf("Check the data entered");    
            }
        }
    }
}
*/