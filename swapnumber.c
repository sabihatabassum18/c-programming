#include<stdio.h>

int main() {

    int a, b, temp;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping the number is a = %d b = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping a = %d, b = %d ", a, b);
    return 0;
}