#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Finding the largest number
    if (a >= b && a >= c) {
        printf("Largest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest number is: %d\n", b);
    }
    else {
        printf("Largest number is: %d\n", c);
    }

    return 0;
}
