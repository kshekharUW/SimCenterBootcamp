#ifndef _ADDLIST
#define _ADDLIST

#include "Task.h"

class Addlist :public Task {
 public:
  Addlist(int input);
  ~Addlist(){};
  int runTask(void);
  
  void Print(ostream &s);

 private:
 	double a, result;
};

class Addlist :public Task {
  std::vector<std::int> _v;
  int sum_of_elems;
public:

  template<typename... Args> Addlist(Args&&... args) : _v(std::forward<Args>(args)...), sum_of_elems(0)
  {  }

  int runTask(void){
  	for(std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
    	sum_of_elems += *it;
  }

  void Print(ostream &s){
	cout<<"The factorial of "<<a<<" is "<<result<<endl;
}

};

#endif