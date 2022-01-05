void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int mystrlen(char* s) {
    int n = 0;
    while (*(s+n) != 0) {
        n++;
    }
    return n * sizeof(char);
}

