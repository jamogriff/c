#include <stdio.h>

int i, j;
int *ptr;

int main(void) {
    printf("Hello World!\n");
    i = 2;
    j = 7;
    ptr = &j;

    printf("\n");
    printf("i has the value of %d stored at memory block %p\n", i, (void *)&i);
    printf("j has the value of %d stored at memory block %p\n", j, (void *)&j);
    printf("ptr has the value of %p stored at memory block %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);

    return 0;
}
