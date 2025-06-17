#include <stdio.h>
#include <string.h>

// Function to reverse string
void reverseString(char str[]) {
    int len = strlen(str);
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to concatenate strings
void concatenateStrings(char str1[], char str2[]) {
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated: %s\n", result);
}

// Function to check if string is palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int isPalin = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalin = 0;
            break;
        }
    }
    if (isPalin)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");
}
 
// Function to copy string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied: %s\n", copy);
}

// Function to get length of string
void getStringLength(char str[]) {
    printf("Length: %d\n", strlen(str));
}

// Function to count frequency of characters
void charFrequency(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'||
                ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

// Function to count spaces and digits
void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
    }
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
}

// Main function with menu-driven logic
int main() {
    char str1[100], str2[100];
    int choice, cont;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Reverse the string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of characters\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count spaces and digits\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Input based on choice
        switch (choice) {
            case 1:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                reverseString(str1);
                break;

            case 2:
                printf("Enter first string (no spaces): ");
                scanf("%s", str1);
                printf("Enter second string (no spaces): ");
                scanf("%s", str2);
                concatenateStrings(str1, str2);
                break;

            case 3:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                checkPalindrome(str1);
                break;

            case 4:
                printf("Enter a string to copy (no spaces): ");
                scanf("%s", str1);
                copyString(str1);
                break;

            case 5:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                getStringLength(str1);
                break;

            case 6:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                charFrequency(str1);
                break;

            case 7:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                countVowelsConsonants(str1);
                break;

            case 8:
                printf("Enter a string (with spaces allowed): ");
                scanf(" %[^\n]s", str1);  // accepts input with spaces
                countSpacesDigits(str1);
                break;

            default:
                printf("Invalid choice.\n");
        }

        printf("\nEnter 1 to continue or any other number to exit: ");
        scanf("%d", &cont);

    } while (cont == 1);

    printf("Thank you!\n");
    return 0;
}