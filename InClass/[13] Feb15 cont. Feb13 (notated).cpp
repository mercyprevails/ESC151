
#include <stdio.h>														// PREPROCESSOR INPUT
int main()																// MAIN RETURNS(0)
{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// OPENING BRACE OF MAIN
	int c = 0;															// DECLARATION - 'c' COUNTS THE NUMBER OF VALID DATA POINTS
	double x;															// 'x' IS DECLARED AS A DOUBLE PRECISION DECIMAL
	FILE* DATA;															// DECLARES 'DATA' AS A FILE
	DATA = fopen("data.txt", "r");										// DATA USES 'fopen' TO COPY CONTENTS OF 'data.txt'
	if (DATA == NULL)													// is DATA empty? (NULL)
		printf("\n   Error opening input file.   \n");					// IF IT IS EMPTY, PRINT Error opening input file." 
	else																// IF IT IS NOT EMPTY THEN SAY SO AND DO OTHER TASKS
	{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// OPENING BRACE OF ELSE
		printf("\n   The input file was opened successfully.\n\n");		// PRINT "The input file was opened successfully."
		fscanf_s(DATA, "%lf", &x);										// COPIES 1st NUMBER FROM DATA AND ASSIGNS IT TO x
		do																// INITIATE 'DO/WHILE' LOOP TO COPY ALL OTHER NUMBERS IN DATA
		{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- - // OPENING BRACE OF 'DO/WHILE' LOOP
			printf("   x = %.0f\n", x);									// OUTPUT EACH ~AND~ ALL OF THE OTHER DATA NUMBERS
			c++;														// INCREMENTS THE COUNTER
			fscanf_s(DATA, "%lf", &x);									// COPIES THE 2nd ~AND~ ALL OF OTHER NUMBERS IN DATA AND ASSIGNS THEM TO x
		} while (x >= 0);												// CONDITION OF CONTINUED LOOPING
		printf("\n   c = %i \n", c);									// PRINTS c - counter - or 'number of valid data points'
	} // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// CLOSING BRACE OF ELSE
	printf("\n\n");														// PRINT A DOUBLE SPACE AFTER EVERYTHING
	return 0;
}
