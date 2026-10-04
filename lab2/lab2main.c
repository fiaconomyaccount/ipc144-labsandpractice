#include <stdio.h>

int readLengthInInches(void);
int numFeet(int lengthInInches);
int numYards(int lengthInFeet);
double inchesToMeters(int lengthInInches);
void printResults(int lengthInInches, int lengthInFeet, int lengthInYards, double lengthInMeters);

int main(void) 
{
	int totalInches, feet, yards;
	double meters;
	printf("Imperial Length Measurement Converter\n");
	
	totalInches = readLengthInInches(); 
	feet = numFeet(totalInches);
	yards = numYards(feet);
	meters = inchesToMeters(totalInches);
	printResults(totalInches, feet, yards, meters);

	return 0;

}
