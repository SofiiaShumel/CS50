#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int shift(char c);

int main(int argc, string argv[])
{
    
    string key;
    string plaintext;
    
    int j = 0;
    
    
    if (argc == 2)
    {

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isalpha(argv[1][i]) == false)
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
         
        key = argv[1];
        int m = strlen(key);
 
        plaintext = get_string("plaintext: ");
        
       
        printf("ciphertext: ");
        
        
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            
            if (j == m)
            {
               j = 0;
            }
            
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                int c = ((((plaintext[i] - 'A') + shift(key[j])) % 26) + 'A');
                printf("%c", c);
                j++;
            }
            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                int c = ((((plaintext[i] - 'a') + shift(key[j])) % 26) + 'a');
                printf("%c", c); 
                j++;
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
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }      
}




int shift(char c)
{
    if (isupper(c))
    {
        return (c - 'A');
    }
    
    else
    {
        return (c - 'a');
    }
}
