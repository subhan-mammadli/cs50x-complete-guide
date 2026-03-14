#include <cs50.h>
#include <stdio.h>

bool calculate_checksum(long number);
string get_card_type(long number);

int main(void)
{
    // Prompt for input
    long card_number = get_long("Number: ");

    // Calculate checksum
    if (calculate_checksum(card_number))
    {
        printf("%s\n", get_card_type(card_number));
    }
    else
    {
        printf("INVALID\n");
    }
}
// Calculate Checksum using Luhn's Algorithm
bool calculate_checksum(long number)
{
    int current_digit = 0;
    int sum_normal = 0;
    int sum_multiplied = 0;
    for (int position = 0; number != 0; position++)
    {
        current_digit = number % 10;
        number = number / 10;

        if (position % 2 == 0)
        {
            sum_normal += current_digit;
        }
        else
        {
            int product = current_digit * 2;
            // If Product is two digit, seperate
            if (product >= 10)
            {
                sum_multiplied += (product % 10) + (product / 10);
            }
            else
            {
                sum_multiplied += product;
            }
        }
    }
    return (sum_normal + sum_multiplied) % 10 == 0;
}

// Returns card brand as a string
string get_card_type(long number)
{
    int length = 0;
    long temp = number;
    long first_digits = number;

    // Count Card Length
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }

    // Divide until 2 digits remain
    while (first_digits >= 100)
    {
        first_digits /= 10;
    }
    if (length == 15 && (first_digits == 34 || first_digits == 37))
    {
        return "AMEX";
    }
    else if (length == 16 && ((first_digits >= 51) && (first_digits <= 55)))
    {
        return "MASTERCARD";
    }
    else if (((length == 13) || (length == 16)) && ((first_digits / 10 == 4 || first_digits == 4)))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}
