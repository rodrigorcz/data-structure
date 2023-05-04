typedef struct {
    long *data;
    long *copy;
    long *count;
    long size;
} list;

void counting_sort(list l);