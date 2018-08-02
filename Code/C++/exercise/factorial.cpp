#include "factorial.h"

Factorial::Factorial(int input): a(input){}

int Factorial::runTask(){
	this->result = calculateFactorial(a);
	return 0;
}

int Factorial::calculateFactorial(int anumber){
	if (anumber==1) return 1;
	else{
		return anumber*(this->calculateFactorial(anumber-1));
	}
}

void Factorial::Print(ostream &s){
	cout<<"The factorial of "<<a<<" is "<<result<<endl;
}