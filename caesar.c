#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string message = get_string("Original Message: ");

    printf("Ciphertext: ");

    for (int i = 0, s = strlen(message); i < s; i++)
    {
        if (isalpha(message[i]))
        {
            if (isupper(message[i]))
            {
                char upper_cypher = ((message[i] - 65 + key) % 26) + 65;
                printf("%c", upper_cypher);
            }
            if (islower(message[i]))
            {
                char lower_cypher = ((message[i] - 97 + key) % 26) + 97;
                printf("%c", lower_cypher);
            }
        }
        else
        {
            printf("%c", message[i]);
        }
    }
    printf("\n");
}
