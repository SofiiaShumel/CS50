#include <cs50.h>
#include <stdio.h>

void print_pyramid(int n);
int get_correct_int(string prompt);

int main(void)
{
    int n = get_correct_int("Height: ");
    print_pyramid(n);  
}

void print_pyramid(int n)
{
   for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n-i-1); k++){
            printf(" ");
        }
       
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
       
        printf("  ");
           
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
       printf("\n");
    }      
}


int get_correct_int(string prompt)
{
    int n;
    do{
       n = get_int("%s", prompt);      
    }
    while((n > 8) || (n < 1));  
    return n;
}



