int_dllf import_int_dllf() {
    int_dllf l;
    l.print= int_dll_print;
    l.print_in_reverse = int_dll_print_in_reverse;
    l.push = int_dll_push;
    l.add = int_dll_shift;
    l.pop= int_dll_pop; 
    l.remove = int_dll_unshift;
    l.reverse = int_dll_reverse;
    l.insert = int_dll_insert;
    l.delete= int_dll_delete;
    l.create = create_int_dll;
    return l;
}

double_dllf import_double_dllf() {
    double_dllf l;
    l.print= double_dll_print;
    l.print_in_reverse = double_dll_print_in_reverse;
    l.push = double_dll_push;
    l.add = double_dll_shift;
    l.pop= double_dll_pop; 
    l.remove = double_dll_unshift;
    l.reverse = double_dll_reverse;
    l.insert = double_dll_insert;
    l.delete= double_dll_delete;
    l.create = create_double_dll;
return l;
}

float_dllf import_dll_listf() {
    float_dllf l;
    l.print= float_dll_print;
    l.print_in_reverse = float_dll_print_in_reverse;
    l.push = float_dll_push;
    l.add = float_dll_shift;
    l.pop= float_dll_pop; 
    l.remove = float_dll_unshift;
    l.reverse = float_dll_reverse;
    l.insert = float_dll_insert;
    l.delete= float_dll_delete;
    l.create = create_float_dll;
return l;
}

char_dllf import_char_dllf() {
    char_dllf l;
    l.print= char_dll_print;
    l.print_in_reverse = char_dll_print_in_reverse;
    l.push = char_dll_push;
    l.add = char_dll_shift;
    l.pop= char_dll_pop; 
    l.remove = char_dll_unshift;
    l.reverse = char_dll_reverse;
    l.insert = char_dll_insert;
    l.delete= char_dll_delete;
    l.create = create_char_dll;
return l;
}

string_dllf import_string_dllf() {
    string_dllf l;
    l.print= string_dll_print;
    l.print_in_reverse = string_dll_print_in_reverse;
    l.push = string_dll_push;
    l.add = string_dll_shift;
    l.pop= string_dll_pop; 
    l.remove = string_dll_unshift;
    l.reverse = string_dll_reverse;
    l.insert = string_dll_insert;
    l.delete= string_dll_delete;
    l.create = create_string_dll;
return l;
}
