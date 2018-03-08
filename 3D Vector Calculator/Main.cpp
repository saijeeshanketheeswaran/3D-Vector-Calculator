#include <iostream>
#include <cmath>
#include "BinomialTheorem.h"
#include "Factorial.h"
#include "Quadratic.h"
#include "Basic_Integrals.h"
#include "Simpson.h"
#include "vector.h"
#include "3DVector.h"

using namespace std;

int main(){
  string operation;
  float x;
  float y;
  float z;
  float ans;
  string result;
  int mainoption;
  int boption;
  int coption;
  int voption;
  cout << "Welcome to the ABAS Calculator" << endl;
  cout << "Choose from one of the following options" << endl;
  cout << "1) Basic Operations" << endl;
  cout << "2) Calculus" << endl;
  cout << "3) Vector" << endl;
  cin >> mainoption;
  //Basic Operations Lines 21-122
  if (mainoption == 1)
  {
  cout << "Choose from one of the following options" << endl;
  cout << "1) Basic Operations" << endl;
  cout << "2) Quadratics" << endl;
  cout << "3) Factorials" << endl;
  cout << "4) Combinations and Permutations" << endl;
  cin >> boption;
  if (boption == 1)
  {
  cout << "Enter an operation that you want" << endl;
  cout << "Add, Subtract, Mutiply or Division" << endl;
  cin >> operation;
  if (operation == "Add"){
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << endl;
    cout << "Enter the second number" << endl;
    cin >> y;
    ans = x+y;
    cout << endl;
    cout << "Answer = " << ans << endl;
  }
  else if (operation == "Subtract"){
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << endl;
    cout << "Enter the second number" << endl;
    cin >> y;
    ans = x-y;
    cout << endl;
    cout << "Answer = " << ans << endl;
  }
  else if (operation == "Multiply"){
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << endl;
    cout << "Enter the second number" << endl;
    cin >> y;
    ans = x*y;
    cout << endl;
    cout << "Answer = " << ans << endl;
  }
  else if (operation == "Divide"){
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << endl;
    cout << "Enter the second number" << endl;
    cin >> y;
    ans = x/y;
    cout << endl;
    cout << "Answer = " << ans << endl;
  }
  cout << "Do you want to add, subtract, multiply or divide another number : ";
  cin >> result;
  if (result == "Yes")
  {
  do {
    cout << "Enter an operation that you want : " << endl;
    cout << "Add, Subtract, Mutiply or Division" << endl;
    cin >> operation;
    if (operation == "Add"){
      cout << "Enter the number" << endl;
      cin >> z;
      ans +=z;
      cout << "Answer = " << ans << endl;
    }
    else if (operation == "Subtract"){
      cout << "Enter the number" << endl;
      cin >> z;
      ans -= z;
      cout << "Answer = " << ans << endl;
    }
    else if (operation == "Multiply"){
      cout << "Enter the number" << endl;
      cin >> z;
      ans *= z;
      cout << "Answer = " << ans << endl;
    }
    else if (operation == "Divide"){
      cout << "Enter the number" << endl;
      cin >> z;
      ans /=z;
      cout << "Answer = " << ans << endl;
    }
    z = 0;
    cout << "Do you want to add, subtract, multiply or divide another number";
    cin >> result;
  } while(result == "Yes");
}
else
{
  return -1;
}
}
if (boption == 2)
{
  float a,b,c;

  Quadratic equation;

  cout << " Using the formula , ax^2 + bx + c " << endl;

  cout<<"enter the value of a = ";
  cin >> a;
  cout << endl;

  cout<<"enter the value of b = ";
  cin >> b;
  cout << endl;

  cout<<"enter the value of c = ";
  cin >> c;
  cout << endl;
  equation.set(a,b,c);
  equation.display();
  cout << endl;
  equation.solve();
  cout << endl;
}
if(boption == 4)
{
  int n;
  int r;

  cout << endl;
  cout << "n has to bigger than r in order to work" << endl;

  cout << "Type a number for n : ";
  cin >> n;

  cout << "Type a number for r : ";
  cin >> r;

  if (n > r){
  BinomialTheorem a (n , r );
  cout << a << endl;
 }
 else{
 cout << endl;
 cout << "Math error!" << endl;
}

}

if (boption == 3)
{
  int factorial;
  cout << " Type in a number is below 70" << endl;
  cin >> factorial;
  Factorial a (factorial);
  cout << a << endl;


}
}



//Calculus Lines 122-?
else if (mainoption == 2)
{
  cout << "Choose from one of the following options" << endl;
  cout << "1) Integrals" << endl;
  cout << "2) Simpson's Rule" << endl;
  cout << "3) Taylor" << endl;
  cout << "4) Trapezoid Rule" << endl;
  cout << "5) Derivation" << endl;
  cin >> coption;

  if (coption ==1)
  {
    int f,n,b,Integral_choice;
    float a;
    string trig;
    string result;
    do {
      cout << "Do you want to integrate basic functions ";
      cin >> result;
    cout << "Which basic Integral would you like to do? " << endl;
    cout << "1: ∫ ax^n*dx,  2: ∫ (1/ax)*dx  3: ∫ (Trigonometry functions)*dx " << endl;
    cout << "4:∫ a*e^xn " << endl;
    cin >> Integral_choice;

    if (Integral_choice != 3){
    cout << "Enter in values for a and n for the form of ax^n" << endl;
    cout << "Enter value of n, example n=7 n: " << endl;
    cin >> n ;
    cout << "Enter value of a, example a=2 a: " << endl;
    cin >> a ;
    }
    else if (Integral_choice == 3){
    cout << "Enter in function as a*sin(b*x) works with cos,tan " << endl;
    cout << "Enter in sin or cos" << endl;
    cin >> trig ;
    cout << "Enter value of a, example a=7 a: " << endl;
    cin >> a ;
    cout << "Enter value of b, example b=2 b: " << endl;
    cin >> b ;

    }

    if (Integral_choice== 1){
      Integral_1_(n,a);
    }
    else if (Integral_choice== 2){
    Integral_2_(n,a);
    }
    else if (Integral_choice== 3){
    Integral_3_( trig ,a, b);
    }
    else if (Integral_choice== 4){
    Integral_4_(n,a);
    }
    cout << "Do you want to integrate basic functions ";
    cin >> result;
    } while(result == "Yes" or result == "Yes" );
  }

  if (coption == 2)
  {
    double simpson(double a, double b, int n , int exponent, float constant);
    double fk(double x,int exponent);
    double a,f,b;
    int n;
    float  constant;
    int exponent;
    string result;
    do {
      cout << "Do you want to use Simpson method to integrate ";
      cin >> result;
      cout << "enter in a value for lower bound (a) : " << endl;
      cin >> a  ;
      cout << "enter in a value for upper bound (b) : "  << endl;
      cin >> b ;
      cout << "Enter in the interval width (n) : " << endl;
      cin >> n ;
      cout << "the equation format is ax^n" << endl;
       cout << "enter in the value for 'a' : " << endl;
       cin >> constant;
       cout << "enter in the value for 'n' : " << endl;
       cin >> exponent;

 f=simpson(a ,b , n, exponent, constant);
 cout <<"The result is f=  "  << f << endl;
 cout << "Do you want to integrate basic functions ";
 cin >> result;
} while(result == "yes" or result == "Yes" );




  }




  if (coption == 3)
  {
    double factorial(double n);

    double x;
double term = 1;
int sign = -1;
char user_opt;

do
{
cout << "Do you want to find the Taylor Series for Cosine(C) or Sine(S)? " << endl;
cin >> user_opt;

if (user_opt == 'C')
{
  int i = 2;

  //Initializes the result to be 1 for cos(x).
  double result = 1;

  cout << "Enter x value to find Taylor Series for Cos(X) (radians)." << endl;
  cin >> x;

  do
  {
    //Determines the term in the Taylor Series formula.
    term = pow(x, i) / (factorial(i));

    //Calculates the taylor series, based on the term.
    result = (result + term) * sign;
    i += 2;
    sign *= (-1);
  }
  while (term > 0.000001);

  cout << "Taylor Series of Cos(X) = " << result << endl;
}

else if (user_opt == 'S')
{
  int i = 3;

  cout << "Enter x value to find Taylor Series for Sin(X) (radians)." << endl;
  cin >> x;

  //Initializes the result to be the x value in the function.
  double result = x;

  do
  {
    term = pow(x, i) / (factorial(i));
    result = (result + term) * sign;
    i += 2;
    sign *= (-1);
  }
  while (term > 0.000001);

  cout << "Taylor Series of Sin(X) = " << result << endl;
}
}
while ((user_opt == 'C') || (user_opt == 'S'));


}





  if (coption == 4)
  {
    double Function(double x_val);
    int n;
    double a, b, c;
  char result;
  double x_start, x_end, x;

  do
  {
  cout << "Enter start x value:" << endl;
  cin >> x_start;

  cout << "Enter end x value:" << endl;
  cin >> x_end;

  cout << "Enter number of trapezoids:" << endl;
  cin >> n;

  cout << "Enter first co-efficient:" << endl;
  cin >> a;

  cout << "Enter second co-efficient:" << endl;
  cin >> b;

  cout << "Enter third co-efficient:" << endl;
  cin >> c;

  //Calculates the delta x-value
  double delta_distance = (x_end - x_start) / n;
  double area = 0;

  //Asks user for the x variable in the function.
  cout << "What is the x-value? " << endl;
  cin >> x;

  double function = Function(x);

  //Calculates area based on the Trapezoid Rule formula.
  for (int i=0; i<n; i++)
  {
    area += (delta_distance * function);
  }

  cout << "The requred area is " << fabs(area) << endl;

  cout << "Do you want to continue? (Y)" << endl;
  cin >> result;

  }
  while (result == 'Y');


}

//Quadratic function.

  if (coption == 5)
  {
    char result;

  do
  {
  cout << "Find the derivative of a basic polynomial " << endl;

  double k, n;

  char x = 'x';

  cout << "Enter value of k(constant) " << endl;
  cin >> k;

  cout << "Enter value of n(exponent) " << endl;
  cin >> n;

  cout << "The polynomial is : "<< k << x << "^" << n << endl;

  //Multiplies the exponent value by the constant.
  k = n*k;

  //Subtracts the exponent value,
  n = (n-1);

  if (n == 1)
  {
    cout << "The derivative is : "<< k << x << endl;
  }
  else
  {
    cout << "The derivative is : "<< k << x << "^" << n << endl;
  }

  cout << "Do you want to continue? (Y)" << endl;
  cin >> result;

  }
  while (result == 'Y');

  }
}

//Calculus Lines 127-?
else if (mainoption == 3)
{
  int option;
  int option2;
  float x;
  float y;
  float z;
  float x2;
  float y2;
  float z2;
  cout << "Welcome to the Vector Calcuator" << endl;
  cout << "This part of the calcuator does 2-D and 3-D Vector calcuations";
  cout << endl;
  cout << "Choose one of the following" << endl;
  cout << "1) 2-D Vectors"<< endl;
  cout << "2) 3-D Vectors"<< endl;
  cin >> option;
  if (option == 1)
  {
    cout << "2-D Vector Calcuations" << endl;;
    cout << "Choose one of the following" << endl;
    cout << "1) 2-D Vector Dot Product" << endl;
    cout << "2) 2-D Vector Cross Product"<< endl;
    cout << "3) 2-D Vector Normalize"<< endl;
    cout << "4) 2-D Vector Scalar multiplication" << endl;
    cout << "5) 2-D Vector Subtraction"<< endl;
    cout << "6) 2-D Vector Addition"<< endl;
    cin >> option2;
    if (option2 == 1)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      vec2 a(x, y);
      vec2 b(x2,y2);
      float a_dot_b = a * b;
      cout << "a * b = " << a_dot_b << endl;
    }
    if (option2 == 2)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      vec2 a(x, y);
      vec2 b(x2, y2);
      a.cross(b);
    }
    else if (option2 == 3)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      vec2 a(x, y);
      a.normalize();
      cout << a << endl;
    }
    else if (option2 == 4)
    {
      int s;
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter in the number you want the vector to be multiplied by: "<< endl;
      cin >> s;
      cout << endl;
      vec2 a(x, y);
      a *= s;
      cout << a << endl;
    }
    else if (option2 == 5)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      vec2 a(x, y);
      vec2 b(x2,y2);
      a.Subtraction(b);
    }
    else if (option2 == 6)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      vec2 a(x, y);
      vec2 b(x2,y2);
      a.Addition(b);
    }
    else
    {
      cout << "ERROR" << endl;
      return -1;
    }
  }
  else if (option == 2)
  {
    cout << "3-D Vector Calcuations" << endl;;
    cout << "Choose one of the following" << endl;
    cout << "1) 3-D Vector Dot Product" << endl;
    cout << "2) 3-D Vector Cross Product"<< endl;
    cout << "3) 3-D Vector Normalize"<< endl;
    cout << "4) 3-D Vector Scalar Multiplication"<< endl;
    cout << "5) 3-D Vector Subtraction"<< endl;
    cout << "6) 3-D Vector Addition"<< endl;
    cin >> option2;
    if (option2 == 1)
    {
      cout << "Enter your x-value of the first vector as a decimal: " << endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z2;
      cout << endl;
      vec3 a(x, y, z);
      vec3 b(x2, y2, z2);
      float a_dot_b = a * b;
      cout << "a * b = " << a_dot_b << endl;
    }
    else if (option2 == 2)
    {
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z2;
      cout << endl;
      vec3 a(x, y, z);
      vec3 b(x2, y2, z2);
      a.cross(b);
      cout << "A X B = " << a << endl;
    }
    else if (option2 == 3)
    {
      cout << "Enter your x-value of the first vector as a decimal"<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal"<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal"<< endl;
      cin >> z;
      cout << endl;
      vec3 a(x, y, z);
      a.normalize();
      cout << a << endl;
    }
    else if (option2 == 4)
    {
      float s;
      cout << "Enter your x-value of the first vector as a decimal: "<< endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z;
      cout << endl;
      cout << "Enter in the number you want the vector to be multiplied by "<< endl;
      cout << "as a decimal: ";
      cin >> s;
      cout << endl;
      vec3 a(x, y, z);
      a *= s;
      cout << a << endl;
    }
    else if (option2 == 5)
    {
      cout << "Enter your x-value of the first vector as a decimal: " << endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z2;
      cout << endl;
      vec3 a(x, y, z);
      vec3 b(x2, y2, z2);
      a.Subtraction(b);
    }
    else if (option2 == 5)
    {
      cout << "Enter your x-value of the first vector as a decimal: " << endl;
      cin >> x;
      cout << endl;
      cout << "Enter your y-value of the first vector as a decimal: "<< endl;
      cin >> y;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z;
      cout << endl;
      cout << "Enter your x-value of the second vector as a decimal: "<< endl;
      cin >> x2;
      cout << endl;
      cout << "Enter your y-value of the second vector as a decimal: "<< endl;
      cin >> y2;
      cout << endl;
      cout << "Enter your z-value of the first vector as a decimal: "<< endl;
      cin >> z2;
      cout << endl;
      vec3 a(x, y, z);
      vec3 b(x2, y2, z2);
      a.Addition(b);
    }
    else
    {
      cout << "ERROR" << endl;
      return -1;
    }
  }
  else
  {
    cout << "ERROR" << endl;
    return -1;
  }

}



}

//Factorial
double factorial(double n)
{
double f = 1;


for (int i = 1; i <= n; i++)
{
  f *= i;
}

return f;
}


//Quadratic function.
double Function(double x_val)
{
  int a;
  int b;
  int c;
  return a*pow(x_val,2) + b*pow(x_val,1) + c;
}


double fk(double x,int exponent)
{
return  pow  (x, exponent);
}


double simpson(double a, double b, int n , int exponent, float constant)
{

	double c= (a+b)/2.0;
	double h3= abs(b-a)/6.0;
	double result= h3*(constant*fk(a,exponent)+4.0*constant*fk(c,exponent)+constant*fk(b,exponent));
	return result;
}
