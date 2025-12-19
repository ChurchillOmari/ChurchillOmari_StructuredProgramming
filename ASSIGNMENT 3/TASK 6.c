#include <stdio.h>
#include <stdlib.h>

// Pass by Value: Increments a copy
void incrementByValue(int n) {
    n = n + 1;
}

// Pass by Reference: Increments the actual variable
void incrementByReference(int *n) {
    *n = *n + 1;
}

int main() {
    int val = 100;

    printf("Initial value: %d\n", val);

    incrementByValue(val);
    printf("After incrementByValue: %d (No change)\n", val);

    incrementByReference(&val);
    printf("After incrementByReference: %d (Value changed)\n", val);

    return 0;
}
