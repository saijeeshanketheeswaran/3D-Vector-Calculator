#ifndef __3DVector_h__
#define __3DVector_h__

#include <iostream>
#include <cmath>

using namespace std;

class vec3
{
private:
  float _x;
  float _y;
  float _z;

public:
vec3()
{
  _x = 0;
  _y = 0;
  _z = 0;
}

vec3(float x=0, float y=0, float z=0)
{
  _x = x;
  _y = y;
  _z = z;
}

friend float operator*(const vec3& a, const vec3& b)
{
  return a._x + b._x + a._y + b._y + a._z + b._z;
}

void cross(const vec3& b)
{
  float x = ((_y * b._z) - (_z* b._y));
  float y = ((_z * b._x) - (_x* b._z));
  float z = ((_x * b._y) - (_y* b._x));
  _x = x;
  _y = y;
  _z = z;
}
void operator*=(float i)
{
  _x*=i;
  _y*=i;
  _z*=i;
}
float Addition(const vec3& b)
{
  _x = _x + b._x;
  _y = _y + b._y;
  _z = _z + b._z;
  cout << "Vector: [" << "x: " << _x << ", y: "<< _y << ", z: "<< _z <<" ]" << endl;
}
float Subtraction(const vec3& b)
{
  _x = _x - b._x;
  _y = _y - b._y;
  _z = _z - b._z;
  cout << "Vector: [" << "x: " << _x << ", y: "<< _y << ", z: "<< _z <<" ]" << endl;
}
void normalize()
{
  float length;
  length = sqrt(_x*_x + _y*_y + _z*_z);
  _x/=length;
  _y/=length;
  _z/=length;
}
friend ostream& operator << (std::ostream& o, const vec3& a)
{
  o << "Vector: [" << "x: " << a._x << ", y: "<< a._y << ", z: "<< a._z <<" ]" << endl;
  return o;
}
};
#endif
