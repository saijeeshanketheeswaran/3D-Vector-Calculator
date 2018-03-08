#ifndef __Quadratic_h__
#define __Quadratic_h__

#include <iostream>

using namespace std;

class Quadratic{

private:
    float a, b, c;

public:
  void set(float f1, float f2, float f3){
    a = f1;
    b = f2;
    c = f3;
    return;
  }

  void solve(){
float determinant;
	float x1;
	float x2;



	determinant = (b*b) -(4*a*c);

  if(determinant > 0){
    cout << "The roots of the equation are " << endl;
    x1 = ( -1 * b + sqrt(determinant)) / (2*a);
    x2 = (-1 * b - sqrt(determinant)) / (2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }

   else if (determinant < 0){
      cout << "There are no real roots" << endl;
      return;
  }

  else if (determinant == 0) {
    x1 = (-b + sqrt(determinant)) / (2*a);
    cout << "x1  =" << x1 << endl;
    cout << "x2  =" << x1 << endl;

  }

}



  void display(){
if (a > 0 && b > 0 && c > 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "+ " <<  b << "x +" << c << endl;
}

      else if (a < 0 && b < 0 && c < 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "- " <<  -1 * b << "x +" << c << endl;
}


     else if (a > 0 && b > 0 && c < 0){
    cout<<"the quadratic equation is "<< a << "x^2 "<<  "+ " << b << "x - " << -1 *c << endl;
}


    else if (a > 0 && b < 0 && c > 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "- " <<  -1 * b << "x + " << c << endl;
}


    else if (a < 0 && b > 0 && c > 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "+ " <<  b << "x + " << c << endl;
}


     else if (a < 0 && b < 0 && c > 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "- " <<  -1 * b << "x + " << c << endl;

}
     else if (a  > 0 && b < 0 && c < 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "- " <<  b << "x - " << -1 * c << endl;

}
      else if (a < 0 && b > 0 && c < 0){
   cout<<"the quadratic equation is "<< a << "x^2 "<<  "- " <<  -1 * b << "x - " << -1 * c << endl;
}



  return;
}
};
#endif
