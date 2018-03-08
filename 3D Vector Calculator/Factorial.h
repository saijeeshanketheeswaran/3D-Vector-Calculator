#ifndef Factorial_h
#define Factorial_h

#include <iostream>

using namespace std;

// Class Factorial
class Factorial{

// Public
public:
  int factorial;
  int sum;

// Public
public:
  Factorial(int factorial){
  int f = factorial;
  sum = 1 ;
  for (int i=1; i <=f; i++){
    sum = sum * i;
  }
}

  //ostream
  friend ostream& operator<< (ostream& os, const Factorial& f){
  os <<  endl;
  os << " Factorial of  " << f.factorial  << "! is " << f.sum << endl;
}


};
#endif
