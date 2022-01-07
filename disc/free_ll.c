struct ll_node {
    int first;
    struct ll_node* rest;
}

void free_ll(struct ll_node** lst) {
    if (*lst) { // address to a node is NULL
        free_ll(&((*lst)->rest)); 
        free(*lst);
    }
    *lst = NULL; // free simply modify the free block list;
    // the underlying values is still there; 
    // this line prevents underlying values to be accessed;
}