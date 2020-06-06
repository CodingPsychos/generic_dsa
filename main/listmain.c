#include <stdio.h>
#include <stdlib.h>
#include "../dsa.h"

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
