/*****************************************************************

    File: lab3.c

    Author: [Francis Iacono]
    Seneca email: [fiacono@myseneca.ca]

    To compile the program on matrix, type:
        gcc -Wall lab3.c lab3main.c -o lab3
    To run program:
        ./lab3

***************************************************************/
// Visual Studio users: Uncomment next line
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// --------------------------------------------
// Function PROTOTYPES
// --------------------------------------------

/*
 * Description: Checks if a character is a lowercase alphabetic character.
 * Arguments: char letter - The character to check.
 * Returns: int - Returns 1 if lowercase, 0 otherwise.
 */
int isLower(char letter);

/*
 * Description: Converts a lowercase alphabetic character to uppercase.
 * Arguments: char letter - The character to convert.
 * Returns: char - The uppercase version if it was lowercase, otherwise the original character.
 */
char toUpper(char letter);

/*
 * Description: Prompts the user to enter the customer's age.
 * Arguments: None.
 * Returns: int - The age entered by the user.
 */
int readAge(void);

/*
 * Description: Displays a menu and asks the user to enter a day of the week (1 to 7).
 * Arguments: None.
 * Returns: int - The integer option matching the day entered by the user.
 */
int readDayOfWeek(void);

/*
 * Description: Prompts the user to specify if they possess a discount coupon (Y/N).
 * Arguments: None.
 * Returns: int - Returns 1 if they have a coupon, 0 if they don't.
 */
int readHasCoupon(void);

/*
 * Description: Computes the movie ticket price based on age, coupon ownership, and day of the week.
 * Arguments: int age - Customer's age, int hasCoupon - Coupon status flag, int dayOfWeek - Day of week code (1-7).
 * Returns: double - The final calculated cost of the ticket.
 */
double ticketPrice(int age, int hasCoupon, int dayOfWeek);


// --------------------------------------------
// Function DEFINITIONS
// --------------------------------------------

int isLower(char letter)
{
    int result = 0;
    if (letter >= 'a' && letter <= 'z')
    {
        result = 1;
    }
    return result;
}

char toUpper(char letter)
{
    char result = letter;
    if (isLower(letter))
    {
        result = letter - ('a' - 'A');
    }
    return result;
}

int readAge(void)
{
    int age;
    printf("Please enter the age of the customer: ");
    scanf("%d", &age);
    return age;
}

int readDayOfWeek(void)
{
    int day;
    printf("Days of the week\n");
    printf("\t1) Sunday\n");
    printf("\t2) Monday\n");
    printf("\t3) Tuesday\n");
    printf("\t4) Wednesday\n");
    printf("\t5) Thursday\n");
    printf("\t6) Friday\n");
    printf("\t7) Saturday\n");
    printf("Please enter the day of the week you wish to see the movie (1 to 7): ");
    scanf("%d", &day);
    return day;
}

int readHasCoupon(void)
{
    char input;
    int result = 0;
    printf("Do you have a coupon? (Y or N): ");
    scanf(" %c", &input);

    input = toUpper(input);
    if (input == 'Y')
    {
        result = 1;
    }
    return result;
}

double ticketPrice(int age, int hasCoupon, int dayOfWeek)
{
    double price = 0.0;

    // Monday Special (Day 2)
    if (dayOfWeek == 2)
    {
        price = 5.00;
    }
    // Midweek Days (Tuesday=3, Wednesday=4, Thursday=5)
    else if (dayOfWeek >= 3 && dayOfWeek <= 5)
    {
        if (age <= 12)
        {
            price = 7.00;
        }
        else if (age >= 65)
        {
            price = 9.00;
        }
        else
        {
            price = 12.00;
        }

        // Apply 20% coupon discount if valid
        if (hasCoupon == 1)
        {
            price = price * 0.80;
        }
    }
    // Weekends (Friday=6, Saturday=7, Sunday=1)
    else
    {
        if (age <= 12)
        {
            price = 8.00;
        }
        else if (age >= 65)
        {
            price = 10.00;
        }
        else
        {
            price = 15.00;
        }

        // Apply 20% coupon discount if valid
        if (hasCoupon == 1)
        {
            price = price * 0.80;
        }
    }

    return price;
}
