#include <stdio.h>
#define BUFFER_SIZE 5

int main() {
    int buffer[BUFFER_SIZE];
    int start = 0;   // points to oldest element
    int count = 0;   // number of elements stored
    int value, index, i;

    printf("Enter sensor values (-1 to stop):\n");

    while (1) {
        scanf("%d", &value);
        if (value == -1)
            break;

        if (count < BUFFER_SIZE) {
            buffer[count] = value;
            count++;
        } else {
            buffer[start] = value;
            start = (start + 1) % BUFFER_SIZE;
        }
    }

    printf("Stored samples (oldest → newest): ");
    for (i = 0; i < count; i++) {
        index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }

    return 0;
}

