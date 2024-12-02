#include <stdio.h>

int main() {
    int number = 10;       // Declare an integer variable
    int *ptr = &number;    // Declare a pointer and assign it the address of 'number'
    
    int a = 100;           // Declare another integer variable
    int *ptr1 = &a;        // Pointer to 'a'
    int b = a;             // Assign value of 'a' to 'b' (not its address)

    // Print values and addresses
    printf("Value of a: %d\n", a);
    printf("Address of a (using pointer): %p\n", ptr1);
    printf("Value of a (dereferenced pointer): %d\n", *ptr1);
    printf("Value of b (copy of a): %d\n", b);

    // Print the value and address of 'number'
    printf("\nValue of number: %d\n", number);
    printf("Address of number: %p\n", &number);

    // Print the value and address using the pointer
    printf("Value through pointer: %d\n", *ptr); // Dereference the pointer
    printf("Pointer address: %p\n", ptr);

    // Modify the value of 'number' using the pointer
    *ptr = 20;
    printf("Modified value of number: %d\n", number);

    return 0;
}
