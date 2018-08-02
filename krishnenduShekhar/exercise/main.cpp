#include <iostream>
using namespace std;

#include "Program.h"
#include "Add2.h"
<<<<<<< Updated upstream
#include "AddVarArgs.h"
=======
#include "factorial.h"
>>>>>>> Stashed changes

int main(int argc, char **argv) {
  Program p1;
  Add2 task1(2,3);
  Add2 task2(2,4);
<<<<<<< Updated upstream
  AddVarArgs task3(3, 1.1,2.2,3.3);  // first number is number of args
  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.addTask(&task3);
=======
  Factorial task3(3);
  Factorial task4(5);

  p1.addTask(&task1);
  p1.addTask(&task2);
  p1.addTask(&task3);
  p1.addTask(&task4);
>>>>>>> Stashed changes
  p1.runTasks(cout);

  p1.addTask(&task1);
  p1.runTasks(cout);

  return 0;
}
