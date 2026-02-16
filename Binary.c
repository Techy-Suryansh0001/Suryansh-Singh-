#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a valid binary number
int isValidBinary(const char *bin) {
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            return 0; // Invalid binary digit found
        }
    }
    return 1;
}

// Convert Binary string to Decimal integer
unsigned long long binaryToDecimal(const char *bin) {
    unsigned long long decimal = 0;
    for (int i = 0; bin[i] != '\0'; i++) {
        decimal = decimal * 2 + (bin[i] - '0');
    }
    return decimal;
}

// Convert Decimal integer to Binary string
void decimalToBinary(unsigned long long decimal, char *binary) {
    if (decimal == 0) {
        strcpy(binary, "0");
        return;
    }
    char temp[65]; // 64-bit max + null terminator
    int index = 0;
    while (decimal > 0) {
        temp[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    temp[index] = '\0';

    // Reverse the string
    for (int i = 0; i < index; i++) {
        binary[i] = temp[index - i - 1];
    }
    binary[index] = '\0';
}

int main() {
    int choice;
    char binary[65];
    unsigned long long decimal;
    char resultBinary[65];

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice (1 or 2): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);

        if (!isValidBinary(binary)) {
            printf("Error: Invalid binary number.\n");
            return 1;
        }

        decimal = binaryToDecimal(binary);
        printf("Decimal equivalent: %llu\n", decimal);

    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        if (scanf("%llu", &decimal) != 1) {
            printf("Invalid input. Please enter a positive integer.\n");
            return 1;
        }

        decimalToBinary(decimal, resultBinary);
        printf("Binary equivalent: %s\n", resultBinary);

    } else {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0; 
}



