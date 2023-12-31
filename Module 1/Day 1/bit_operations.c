#include <stdio.h>

int bit_operations(int num, int operator_type) {
    switch (operator_type) {
        case 1:  // Set 1st bit
            num = num | (1 << 0);
            break;
        case 2:  // Clear 31st bit
            num = num & ~(1 << 31);
            break;
        case 3:  // Toggle 16th bit
            num = num ^(1 << 15);
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }

    return num;
}

int main() {
    int num, operator_type;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operator_type);

    int result = bit_operations(num, operator_type);
    printf("Result: %d\n", result);

    return 0;
}
