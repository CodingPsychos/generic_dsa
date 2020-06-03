int_listf import_int_listf() {
    int_listf l;
    l.print= int_list_print;
    l.print_in_reverse = int_list_print_in_reverse;
    l.push = int_list_push;
    l.add = int_list_shift;
    l.pop= int_list_pop; 
    l.remove = int_list_unshift;
    l.reverse = int_list_reverse;
    l.insert = int_list_insert;
    l.delete= int_list_delete;
    l.create = create_int_list;
    return l;
}

double_listf import_double_listf() {
    double_listf l;
    l.print= double_list_print;
    l.print_in_reverse = double_list_print_in_reverse;
    l.push = double_list_push;
    l.add = double_list_shift;
    l.pop= double_list_pop; 
    l.remove = double_list_unshift;
    l.reverse = double_list_reverse;
    l.insert = double_list_insert;
    l.delete= double_list_delete;
    l.create = create_double_list;
return l;
}

float_listf import_float_listf() {
    float_listf l;
    l.print= float_list_print;
    l.print_in_reverse = float_list_print_in_reverse;
    l.push = float_list_push;
    l.add = float_list_shift;
    l.pop= float_list_pop; 
    l.remove = float_list_unshift;
    l.reverse = float_list_reverse;
    l.insert = float_list_insert;
    l.delete= float_list_delete;
    l.create = create_float_list;
return l;
}

char_listf import_char_listf() {
    char_listf l;
    l.print= char_list_print;
    l.print_in_reverse = char_list_print_in_reverse;
    l.push = char_list_push;
    l.add = char_list_shift;
    l.pop= char_list_pop; 
    l.remove = char_list_unshift;
    l.reverse = char_list_reverse;
    l.insert = char_list_insert;
    l.delete= char_list_delete;
    l.create = create_char_list;
return l;
}

string_listf import_string_listf() {
    string_listf l;
    l.print= string_list_print;
    l.print_in_reverse = string_list_print_in_reverse;
    l.push = string_list_push;
    l.add = string_list_shift;
    l.pop= string_list_pop; 
    l.remove = string_list_unshift;
    l.reverse = string_list_reverse;
    l.insert = string_list_insert;
    l.delete= string_list_delete;
    l.create = create_string_list;
return l;
}
