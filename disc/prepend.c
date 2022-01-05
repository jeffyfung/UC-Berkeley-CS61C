struct ll_node {
    int first;
    struct ll_node* rest;
}

void prepend(struct ll_node** lst, int value) {
    struct ll_node* front = (struct ll_node*) malloc(sizeof(struct ll_node));
    front->first = value;
    front->rest = *lst;
    *lst = front;
}