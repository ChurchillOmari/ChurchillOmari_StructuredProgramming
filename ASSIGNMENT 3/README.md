# TASK 1  
## Variables, Pointers, and Function Calls in C

---

## 1. Difference Between a Normal Variable and a Pointer

| Feature | Normal Variable | Pointer Variable |
|-------|----------------|-----------------|
| Storage Content | Stores actual data value (e.g., `10`, `'A'`) | Stores memory address of another variable |
| Memory Access | Accessed directly | Accessed indirectly |
| Value Reading | Using variable name | Using dereferencing (`*`) |
| Value Modification | Direct assignment | Indirect using dereferencing |

---

## 2. Variable Declaration vs Pointer Declaration

| Aspect | Normal Variable | Pointer Variable |
|------|----------------|-----------------|
| Syntax | `int x = 10;` | `int *p = &x;` |
| Stored Data | Actual value | Address of a variable |
| Value Access | `x` | `*p` |
| Address Operator `&` | Used to get address | Used during initialization |
| Dereferencing `*` | Not used | Used to access value |
| Modification | `x = 20;` | `*p = 20;` |
| Meaning | Name represents value | Name represents address |

---

## 3. Pointer Declaration Example

```c
#include <stdio.h>

int main() {
    int x = 25;
    int *p = &x;

    printf("Value of x: %d\n", *p);
    *p = 56;
    printf("New value of x: %d\n", x);

    return 0;
}
