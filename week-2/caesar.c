#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    int key;
    string plaintext;
    
    
    if (argc == 2)
    {

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        key = atoi(argv[1]);  
        plaintext = get_string("plaintext: ");
        
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                int c = ((((plaintext[i] - 'A') + key) % 26) + 'A');
                printf("%c", c);
            }
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                int c = ((((plaintext[i] - 'a') + key) % 26) + 'a');
                printf("%c", c);    
            }
            else
            {
                printf("%c", plaintext[i]);     
            }
        }
        printf("\n");
        
        
    }
    else
    { 
        printf("Usage: ./caesar key\n");
        return 1;
    }      
}
