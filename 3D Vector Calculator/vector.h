#ifndef __a3vector_h__
#define __a3vector_h__

#include <iostream>
#include <cmath>

using namespace std;

class vec2
{
private:
  float _x;
  float _y;

public:
vec2()
{
  _x = 0;
  _y = 0;
}

vec2(float x=0, float y=0)
{
  _x = x;
  _y = y;
}

float& operator[] (int i) {
  if (i==0){
    return _x;
  }
  else if(i==1){
    return _y;
  }
}
void operator*=(float i)
{
  _x*=i;
  _y*=i;
}
float cross(const vec2& b)
{
  float _z = 0;
  float x = ((_y * _z) - (_z* b._y));
  float y = ((_z * b._x) - (_x* _z));
  float z = ((_x * b._y) - (_y* b._x));
  _x = x;
  _y = y;
  _z = z;
  cout << "Vector: [" << "x: " << _x << ", y: "<< _y << ", z: "<< _z <<" ]" << endl;
}
friend float operator*(const vec2& a, const vec2& b)
{
  return a._x + b._x + a._y + b._y;
}
float Addition(const vec2& b)
{
  _x = _x + b._x;
  _y = _y + b._y;
  cout << "Vector: [" << "x: " << _x << ", y: "<< _y <<" ]" << endl;
}
float Subtraction(const vec2& b)
{
  _x = _x - b._x;
  _y = _y - b._y;
  cout << "Vector: [" << "x: " << _x << ", y: "<< _y <<" ]" << endl;
}
void normalize()
{
  float length;
  length = sqrt(_x*_x + _y*_y);
  _x/=length;
  _y/=length;
}
friend ostream& operator << (std::ostream& o, const vec2& a)
{
  o << "Vector: [" << "x: " << a._x << ", y: "<< a._y << " ]" << endl;
  return o;
}
};
#endif
