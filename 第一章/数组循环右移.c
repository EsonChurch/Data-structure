#include <stdio.h>
void swap(int* a,int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(){
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int step = 3, i;
    for(i = step;  i != 0; i = (i + step) % 10)
        swap(&a[0], &a[i]);
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}