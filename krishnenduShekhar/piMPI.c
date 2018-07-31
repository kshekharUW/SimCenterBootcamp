#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char const *argv[])
{

	int procID, numP;
	double sum;
	MPI_Init(&argc, &argv);
	MPI_Comm_Size(MPI_COMM_WORLD, &numP);
	MPI_Comm_Rank(MPI_COMM_WORLD, &procID);

	int numSteps = 100;
	if (&procID==0){
		double step = 1.0/numSteps;
		MPI_Bcast(&numSteps, 1, MPI_INT, 0, MPI_COMM_WORLD);
	}

	double step = 1.0/numSteps;
	double localsum = 0;

	int nRange=numSteps/numP;
	int start = procID*nRange, end = (procID+1)*nRange-1;
	if(end>99){end=99;}

	for(int i=start; i<=end; i++){
		double a = step * i;
		double b = step * (i+1);
		double h = 0.5*(4.0/(1.0+a*a) + 4.0/(1.0+b*b) ); 
		localsum += h*step;
	}


	MPI_Gather(&localsum, 1, MPI_DOUBLE, &sum, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);


	printf("%g\n", sum);
	MPI_Finalize();

	return 0;
}