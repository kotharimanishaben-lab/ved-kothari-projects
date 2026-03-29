#include <stdio.h>

int main () {
    int a, i=1;
    while(i<11) {
        printf("%d\t", i);
        i++;
    }
    printf("\n");
    do{
        printf("%d\t", i);
        i++;
    }while(i<11);

    return 0;
}