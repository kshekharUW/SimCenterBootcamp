#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// printf("%d\n", argc );
	int numSteps = atoi(argv[1]);
	double step = 1.0/numSteps;

	double sum = 0;
	for(int i=0; i<numSteps; i++){
		double a = step * i;
		double b = step * (i+1);
		double h = 0.5*(4.0/(1.0+a*a) + 4.0/(1.0+b*b) ); 
		sum += h*step;
	}
	printf("%g\n", sum);

	return 0;
}