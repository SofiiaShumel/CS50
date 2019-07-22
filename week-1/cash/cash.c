#include <stdio.h>
#include <cs50.h>
#include <math.h>


float get_correct_num(string);

int main(void)
{
    int coins;
    int owed;
    int count = 0;
    
    float dollars = get_correct_num("Change owed: ");

    coins = round(dollars * 100);
    owed = coins;
  
    while (true)
    {
        if (coins >= 25)
        {
            count = coins / 25 ; 
            owed = coins % 25; 
//             printf("25: %i %i \n ", count, owed);
            if (owed == 0) break;
            
        }  
        
        if (owed >= 10)
        {
            count = count + (owed/10);
            owed = owed % 10;
//             printf("10: %i %i \n", count, owed);
            if (owed == 0) break;
        }
        
        if (owed >= 5)
        {
            count = count + (owed/5);
            owed = owed % 5;
//             printf("5: %i %i \n", count, owed);
            if (owed == 0) break;
        }
        
//         printf("1: %i %i \n ", count, owed);
        count = count + (owed/1);
        break;
    }
    printf("%i\n",count);
}


float get_correct_num(string prowd)
{
    float n;
    do
    {
        n = get_float("%s",prowd);
    }
    while (n < 0);
    return n;
}
 
