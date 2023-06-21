#include<stdio.h>
int main() {
    int intSize;
    float floatSize;
    double doubleSize;
    char charSize;


    printf("Size of int: %d bytes\n", sizeof(intSize));
    printf("Size of float: %d bytes\n", sizeof(floatSize));
    printf("Size of double: %d bytes\n", sizeof(doubleSize));
    printf("Size of char: %d byte\n", sizeof(charSize));
    
    return 0;
}
