/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool valid(int n)  {
	if(n<0)
		return false;
	return true;
}
//This is a comment before main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting\n");
	return(0);

} // end main
