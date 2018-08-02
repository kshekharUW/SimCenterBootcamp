#ifndef _CONSTRAINT 
#define _CONSTRAINT

#include <stdio.h>
#include <stdlib.h>


typedef struct constraint { 
	int numDofs;
	int *dof; 
} Constraint;
void constraintPrint(Constraint *);
void setConstraints(Constraint *, int*); 
#endif