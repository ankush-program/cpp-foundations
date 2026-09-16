#include <stdio.h>

void swap(int* a, int* b){
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}

void update(int *a, int* b){
    // if-else - to make difference positive
    if(*a > *b){
        *a = *a + *b ;          // sum
        *b = *a - 2*(*b);       // difference
    } else {
        *a = *a + *b ;          // sum
        *b = - *a + 2*(*b);     // difference
    }
}

int main(){
    printf("Enter two numbers: ");
    int a, b ;
    scanf("%d %d", &a, &b);

    int *pa = &a, *pb = &b;
    swap(pa,pb);

    printf("After swap:\na = %d , b = %d\n", a, b);

    update(pa,pb);
    printf("sum = %d , difference = %d",a,b);
    return 0;
}