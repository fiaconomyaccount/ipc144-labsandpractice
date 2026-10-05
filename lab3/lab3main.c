/*****************************************************************

    File: lab3main.c

    Author: Francis Iacono
    Seneca email: fiacono@myseneca.ca

    To compile the program on matrix, type:
        gcc -Wall lab3.c lab3main.c -o lab3
    To run program:
        ./lab3

***************************************************************/
// Visual Studio users: Uncomment next line
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Required function prototypes
int isLower(char letter);
char toUpper(char letter);
int readAge(void);
int readDayOfWeek(void);
int readHasCoupon(void);
double ticketPrice(int age, int hasCoupon, int dayOfWeek);

int main(void)
{
    int dayOfWeek;
    int age = 0;
    int hasCoupon = 0;
    double finalCost;

    // 1. Prompt for day of the week
    dayOfWeek = readDayOfWeek();

    // If it is NOT Monday (2), prompt for age and coupon info
    if (dayOfWeek != 2)
    {
        // 2. Prompt for age
        age = readAge();

        // 3. Prompt for coupon status
        hasCoupon = readHasCoupon();
    }

    // 4. Calculate price
    finalCost = ticketPrice(age, hasCoupon, dayOfWeek);

    // 5. Output calculated price formatted to 2-decimal places
    printf("Your ticket will cost: $%.2f\n", finalCost);

    return 0;
}
