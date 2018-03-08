#ifndef BinomialTheorem_h
#define BinomialTheorem_h

#include <iostream>
using namespace std;

// Class
class BinomialTheorem{
public:
  int n;
  int r;
  float sum;
  float sum2 ;
  float sum3;
  float answer;
  float answer2;

// Public
public:
  BinomialTheorem(int n, int r){
    int a = n;
    int b = r;
    sum = 1;
    sum2 = 1;
    sum3  = 1;
    int x =  a-b;

    for (int i=1; i <=a; i++){
      sum = sum * i;
    }

    for (int i=1; i <=b; i++){
      sum2 = sum2 * i;
    }

    for (int i=1; i <=x; i++){
      sum3 = sum3 * i;
    }
   answer = (sum) / (sum2 * sum3);
   answer2 = (sum)/(sum3);
 }


   // ostream
  friend ostream& operator<< (ostream& os, const BinomialTheorem& a){
      os <<  endl;
      os <<  "Combination = " << a.n << "C" << a.r << " = " << a.answer << endl;
      os <<  "Permutation = " << a.n << "P" << a.r << " = " << a.answer2  << endl;
  }
};
#endif
