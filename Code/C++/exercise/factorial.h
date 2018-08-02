#ifndef _FACTORIAL
#define _FACTORIAL

#include "Task.h"

class Factorial :public Task {
 public:
  Factorial(int input);
  ~Factorial(){};
  int runTask(void);
  
  void Print(ostream &s);

 private:
 	int calculateFactorial(int anumber);
	double a, result;
};

#endif
