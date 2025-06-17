#include <stdio.h>
#include <string.h>

// Function to check string equality
void checkEquality(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        printf("\n-- The strings are Equal.\n");
    else
        printf("\n-- The strings are Not Equal.\n");
}

// Function to copy string
void copyString(char source[]) {
    char copy[100];
    strcpy(copy, source);
    printf("\n-- Copied String is: %s\n", copy);
}

// Function to concatenate strings
void concatenate(char str1[], char str2[]) {
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);
    printf("\n-- Concatenated String is: %s\n", result);
}

// Function to show string
void showString(char str[]) {
    printf("\n-- The string you entered is : %s\n", str);
}

// Function to reverse string
void reverseString(char str[]) {
    int len = strlen(str);
    printf("\n-- The string after reversing is : ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

// Function to check palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("\n-- The string is a Palindrome.\n");
    else
        printf("\n-- The string is not a Palindrome.\n");
}

// Function to check substring
void checkSubstring(char mainStr[], char subStr[]) {
    if (strstr(mainStr, subStr) != NULL)
        printf("\n-- Substring Found.\n");
    else
        printf("\n-- Substring Not Found.\n");
}

int main() {
    int choice, cont;
    char str1[100], str2[100];

    do {
        printf("\nMain Menu\n");
        printf("1. Equality\n");
        printf("2. String Copy\n");
        printf("3. Concat\n");
        printf("4. Show\n");
        printf("5. Reverse\n");
        printf("6. Palindrome\n");
        printf("7. Sub String\n");
        printf("8. Exit\n");

        printf("\nPlease Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nPlease Enter first string: ");
                scanf("%s", str1);
                printf("Please Enter second string: ");
                scanf("%s", str2);
                checkEquality(str1, str2);
                break;

            case 2:
                printf("\nPlease Enter the string to copy: ");
                scanf("%s", str1);
                copyString(str1);
                break;

            case 3:
                printf("\nPlease Enter first string: ");
                scanf("%s", str1);
                printf("Please Enter second string: ");
                scanf("%s", str2);
                concatenate(str1, str2);
                break;

            case 4:
                printf("\nPlease Enter the string: ");
                scanf("%s", str1);
                showString(str1);
                break;

            case 5:
                printf("\nPlease Enter the string: ");
                scanf("%s", str1);
                reverseString(str1);
                break;

            case 6:
                printf("\nPlease Enter the string: ");
                scanf("%s", str1);
                checkPalindrome(str1);
                break;

            case 7:
                printf("\nPlease Enter main string: ");
                scanf("%s", str1);
                printf("Please Enter substring to search: ");
                scanf("%s", str2);
                checkSubstring(str1, str2);
                break;

            case 8:
                printf("\n-- Exiting the program.\n");
                return 0;

            default:
                printf("\n-- Invalid choice. Please try again.\n");
        }

        printf("\nDo you want to continue (Press 1 to continue): ");
        scanf("%d", &cont);

    } while (cont == 1);

    printf("\n-- Thank you for using the String Operations Application!\n");
    return 0;
}

