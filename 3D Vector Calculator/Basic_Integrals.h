#ifndef Simpson_h
#define Simpson_h

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int Integral_1_(  int n, float a);

int Integral_2_ (int n ,float a);

int Integral_3_ (string trig ,float a, int b);

int Integral_4_ (int n ,float a);



 int Integral_1_(int n,float a)
{
  float Final ;
  float x_value ;
  string answer;
	int f= (n+1);
  cout <<"The Integral is:  (" << a << "/"<<  f << ") * x^(" << f << ") + C"   << endl;

  cout << "sub in a value for x" << endl;
  cout << "Would you like to sub in a value for x, type yes or no: " << endl;
  cin >> answer;
  if (answer == "yes" or answer == "Yes"){
  cin >> x_value;
  Final = (a/f) * pow (x_value,  f);
  cout << "The integral value is: " << Final <<"+ C" << endl;
}

  }

  int Integral_2_(int n,float a)
 {
   float Final ;
   float x_value ;
   string answer;
   int f= (n-1);
   float denominator = f*a;
   cout <<"The Integral is: " "-1/" << denominator << "x^"<<f << endl;
   cout << "Would you like to sub in a value for x, type yes or no: " << endl;
   cin >> answer;
   if (answer == "yes" or answer == "Yes"){
   cout << "sub in a value for x" << endl;
   cin >> x_value;
   Final = - (1/denominator) * pow (x_value,  f);
   cout << "The integral value is: " << Final <<" + C" << endl;
 }

   }

   int Integral_3_ (string trig ,float a, int b){

if (trig == "sin" or trig == "Sin"  ){
  cout << '(' << a << "*sin(" << b << "x))/" << a << "+ C " << endl;
}
else if (trig == "cos" or trig == "Cos"  ){
  cout << '(' << -a << "cos(" << b << "x))/" << a << "+ c" << endl;
}
else if (trig == "tan" or trig == "Tan"  ){
  cout << '(' << a << "ln "<< "*|sec(" << b << "x)|)/" << a << "+ C " << endl;

}
}

   int Integral_4_ (int n , float a){
   cout << a << "e^x" << n << "+ C" << endl;
 }

#endif
