//Lists for data storage
typedef struct {
    long *data;
    long *copy;
    long *count;
    long size;
}list;

void counting_sort(list l);
void bubble_sort(list l);
void selection_sort(list l);
void insertion_sort(list l);
void merge_sort(list l);
void quick_sort(list l);
void shell_sort(list l);
void radix_sort(list l);
void heap_sort(list l);