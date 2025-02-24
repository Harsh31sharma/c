#include <stdio.h>

int sqr(int x) {
    int mid = 0;
    int low = 1;
    int high = x;

    if (x<0){
        printf ("it is an imagenary number");
        return -1;
    }

    if (x < 2) {
        return x; // Return directly for 0 and 1
    }

    while (low <= high) {
        mid = (low + high) / 2;

        if (mid * mid == x) { 
            return mid; // Exact square root found
        } else if (mid * mid < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int a = sqr(16);
    printf("Square root: %d\n", a);
    return 0;
}
