int_bstf import_int_bstf() {
    int_bstf l;
    l.preorder= int_bst_print_preorder;
    l.postorder=int_bst_print_postorder;
    l.inorder=int_bst_print_inorder;
    l.push = int_bst_push;
    l.pop= int_bst_pop;
    l.create = create_int_bst;
    return l;
}

double_bstf import_double_bstf() {
    double_bstf l;
    l.preorder= double_bst_print_preorder;
    l.postorder=double_bst_print_postorder;
    l.inorder=double_bst_print_inorder;
    l.push = double_bst_push;
  //  l.pop= double_bst_pop;
    l.create = create_double_bst;
return l;
}

float_bstf import_float_bstf() {
    float_bstf l;
     l.preorder= float_bst_print_preorder;
    l.postorder=float_bst_print_postorder;
    l.inorder=float_bst_print_inorder;
    l.push = float_bst_push;
   // l.pop= float_bst_pop;
   l.create = create_float_bst;
return l;
}

