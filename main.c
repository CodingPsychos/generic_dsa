#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"

void main() {   
    ilist* l = create_ilist(); 
    while(1){
        printf("\na.push\n"
                "b.pop\n"
                "c.shift\n"
                "d.unshift\n"
                "e.insert\n"
                "f.delete\n"
                "g.print\n"
                "h.print in reverse\n"
                "i.reverse ilist\n"
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
                ilist_push(l,a);
                ilist_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'b':
                ilist_pop(l);
                ilist_print(l);
                printf("count = %d",l->count);
                break;
                
                case 'c':{
                int a;
                printf("Enter the value");
                scanf("%d",&a);
                ilist_shift(l,a);
                ilist_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'd':
                ilist_unshift(l);
                ilist_print(l);
                printf("count = %d",l->count);
                break;
                         
                case 'e':{
                int v;
                int p,n;
                printf("Enter the position");
                scanf("%d",&p);
                printf("Enter the value");
                scanf("%d",&n);
                v=ilist_insert(l,p,n);
                printf("\n%d Value added",v);
                ilist_print(l);
                break;
                }
                
                case 'f':{
                int v;
                int p;
                printf("Enter the position");
                scanf("%d",&p);
                v=ilist_delete(l,p);
                printf("\n%d position removed",v);
                ilist_print(l);
                break;
                }

                case 'g':
                ilist_print(l);
                break;
                
                case 'h':
                ilist_print_in_reverse(l);
                break;

                case 'i':
                ilist_reverse(l);
                break;

                case 'j':   {
                int n;
                printf("Enter the position\n");
                scanf("%d",&n);
                printf("%d",ilist_data(l,n));
                break;
                }
                default:printf("Check the data entered");    
            }
        }
    }
}



