int int_bst_pop(int_bst_node** root,int data){
	int_bst_node* node=*root;
	if((node)==NULL)
		return 0;

	while((node)->data != data ){
		if(data<(node)->data)
			(node)=(node)->left;
		else
			node=(node)->right;
		if(node == NULL){
			printf("ENTERED WRONG DATA\n");
			break;
		}
	
	}

	if((node)->left!=NULL){
		int_bst_node* temp= node;
		(temp)=(temp)->left;
		
		while((temp)->right != NULL)
			(temp)=(temp)->right;

		node->data=(temp)->data;
		temp=NULL;
		free(temp);
//	int_bst_print_preorder(*root);
	}else{
		int_bst_node* temp=node;
		(temp)=(temp)->right;

		while((temp)->left !=NULL)
			(temp)=(temp)->left;

		node->data=temp->data;
		temp=NULL;
	}



return data;
}

