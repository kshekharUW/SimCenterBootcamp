#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	double sum = 0;
	int numSteps = atoi(argv[1]);
	int numThreadDemand = atoi(argv[2]);
	double step = 1.0/numSteps;

	// double tbegin = omp_get_wtime();
	#pragma omp parallel num_threads(numThreadDemand)
	{
		int procID = omp_get_thread_num();
		int numP   = omp_get_num_threads();
		int nRange=numSteps/numP;
		int start = procID*nRange, end = (procID+1)*nRange-1;
		if(end>numSteps-1){end=numSteps-1;}

		double localsum=0;	
		for(int i=start; i<end; i++){
			double a = step * i;
			double b = step * (i+1);
			double h = 0.5*(4.0/(1.0+a*a) + 4.0/(1.0+b*b) ); 
			localsum += h*step;
		}
		#pragma omp_critical
		sum+=localsum;
	}
	// double tend = omp_get_wtime() - tbegin;
	printf("value of Pi = %g \n", sum);
	return 0;
}