#include <stdio.h>
#include <cs50.h>


int main(void){
    
    long number = get_long("Number: ");
    
    int digit_number;
    int sum = number % 10;
    int flag = 0; 
    int i = 0;
        
    string bank = "INVALID";
       

       
    do
    {
        i++;
        number = number / 10;
        if (flag == 0)
        {
            digit_number = (number % 10)*2;  
            flag++;
        }
        else 
        {
            digit_number = (number % 10);
            flag--;
        }
        sum += (digit_number/10 + digit_number%10);

        
        if ((i == 12 || i == 15) && number == 4) bank = "VISA";
        
        if ((i == 13) && (number%100 == 34 || number%100 == 37)) bank = "AMEX";
        
        if ((i == 14) && (number == 51 || number == 52 || number == 53 || number == 54 || number == 55))
            bank = "MASTERCARD";
        
    } 
    while ((number/10) != 0); 
    

// check wrong card
    if (sum % 10 != 0)
    {
        printf("INVALID\n");       
    }
    else
    {
        printf("%s\n", bank);
    }
}
