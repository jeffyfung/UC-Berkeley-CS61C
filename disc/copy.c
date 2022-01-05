void copy(char* src, char* dst) {
    int i = 0;
    while (*(src + i) != 0) {
        *(dst + i) = *(src + i);
    }
}
