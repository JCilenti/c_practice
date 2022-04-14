#include <stdio.h>
#include <stdlib.h>


void BreakStack(char* x) {
    (&x)[2] += 2;
}


int main(){
    int Number = 1;
    BreakStack("X");
    Number = 2;
    printf("%i\n", Number);
}