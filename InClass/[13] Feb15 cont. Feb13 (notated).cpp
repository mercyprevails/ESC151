#include <stdio.h>														// PREPROCESSOR INPUT
int main()																// MAIN RETURNS(0)
{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// OPENING BRACE OF MAIN
	int c = 0, k = 0, m ,j;													// DECLARATION - 'c' COUNTS THE NUMBER OF VALID DATA POINTS AND 'k' THE ARRAY SUBSCRIPT
	double x[20], hold;															// 'x' IS DECLARED AS A DOUBLE PRECISION DECIMAL
	FILE* DATA;															// DECLARES 'DATA' AS A FILE
	DATA = fopen("data.txt", "r");										// DATA USES 'fopen' TO COPY CONTENTS OF 'data.txt'
	if (DATA == NULL)													// is DATA empty? (NULL)
		printf("\n   Error opening input file.   \n");					// IF IT IS EMPTY, PRINT Error opening input file." 
	else																// IF IT IS NOT EMPTY THEN SAY SO AND DO OTHER TASKS
	{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// OPENING BRACE OF ELSE
		printf("\n   The input file was opened successfully.\n\n");		// PRINT "The input file was opened successfully."
		fscanf_s(DATA, "%lf", &x[k]);										// COPIES 1st NUMBER FROM DATA AND ASSIGNS IT TO x
		do																// INITIATE 'DO/WHILE' LOOP TO COPY ALL OTHER NUMBERS IN DATA
		{ // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- - // OPENING BRACE OF 'DO/WHILE' LOOP
			printf("   x[%i] = %.0f\n", k, x[k]);									// OUTPUT EACH ~AND~ ALL OF THE OTHER DATA NUMBERS
			c++;														// INCREMENTS THE COUNTER
			k++;														// INCREMENTS THE ARRAY SUBSCRIPT
			fscanf_s(DATA, "%lf", &x[k]);									// COPIES THE 2nd ~AND~ ALL OF OTHER NUMBERS IN DATA AND ASSIGNS THEM TO x
		} while (x[k] >= 0);												// CONDITION OF CONTINUED LOOPING
		printf("\n   c = %i \n\n", c);									// PRINTS c - counter - or 'number of valid data points'
	} // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --	// CLOSING BRACE OF ELSE
	
	for (k = 0; k <= c - 1; k++);
	{
		m = k;
		for (j = k + 1; j <= c - 1; j++)
			if (x[j] > x[m])
				m = j;
		hold = x[m];
		x[m] = x[k];
		x[k] = hold;
	}
	for (k = 0; k <= c - 1; k++); //
		printf("   x[%i] = %.0f\n", k, x[k]);
	printf("\n\n");														// PRINT A DOUBLE SPACE AFTER EVERYTHING
	return 0;
}
