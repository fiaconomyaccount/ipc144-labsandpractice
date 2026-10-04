#include <stdio.h>

// Function PROTOTYPES
int readLengthInInches(void);
int numFeet(int lengthInInches);
int numYards(int lengthInFeet);
double inchesToMeters(int lengthInInches);
void printResults(int lengthInInches, int lengthInFeet, int lengthInYards, double lengthInMeters);

// Function DEFINITIONS
int readLengthInInches(void)
{
    int inches;
    printf("Please enter the length measurement to the nearest inch: ");
    scanf("%d", &inches);
    return inches;
}

int numFeet(int lengthInInches)
{
    int feet;
    feet = lengthInInches / 12;
    return feet;
}

int numYards(int lengthInFeet)
{
    int yards;
    yards = lengthInFeet / 3;
    return yards;
}

double inchesToMeters(int lengthInInches)
{
    double meters;
    meters = lengthInInches * 0.0254;
    return meters;
}

void printResults(int lengthInInches, int lengthInFeet, int lengthInYards, double lengthInMeters)

{
    int looseYards = lengthInInches / 36;
    int looseFeet = (lengthInInches % 36) / 12;
    int looseInches = lengthInInches % 12;

    printf("Total length: %d\n", lengthInInches);
    printf("Length rounded to number of feet: %d\n", lengthInFeet);
    printf("Length rounded to number of yards: %d\n", lengthInYards);
    printf("Total length (imperial): %dyd %d' %d\"\n", looseYards, looseFeet, looseInches);
    printf("Total length (metric): %.2f m\n", lengthInMeters);
}
