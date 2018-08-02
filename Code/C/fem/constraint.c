#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
	printf("Constraints are:");
	for (int i = 0; i < theConstraint->numDofs; ++i) printf("%d ", theConstraint->dof[i] );
}

void setConstraints(Constraints *theConstraint, int numInputConstraints, int* inputConstraint){
	if (numInputConstraints > theConstraint->numDofs){ 
		printf("Number of constraints being set greater than number of degrees of freedom\n")
	}
	else{
		for (int i = 0; i < numInputConstraints; ++i){
			dof[i] = inputConstraint[i];
		}
	}
}