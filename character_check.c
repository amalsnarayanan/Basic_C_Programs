#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch)
    {
       
        case 'A' ... 'Z':
            printf("Uppercase letter\n"); 
            break;

       
        case 'a' ... 'z':
            printf("Lowercase letter\n");
            break;

    
        case '0' ... '9':
            printf("Digit\n");
            break;

        default:
            printf("Special character / symbol\n");
    }

    return 0;
}
