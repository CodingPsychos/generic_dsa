void int_list_clear(int_list* l) 
{ 
   int_list_node* current = l->head; 
   int_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

void double_list_clear(double_list* l) 
{ 
   double_list_node* current = l->head; 
   double_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

