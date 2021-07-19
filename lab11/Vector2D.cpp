#include "Vector2D.h"
int Vector2D::count=0;
Vector2D::Vector2D():_x(0.0),_y(0.0)
{
  count++;
}
Vector2D::Vector2D(const Vector2D& w):_x(w._x),_y(w._y)
{
  w.print("copying  ");
  count++;
}
Vector2D::Vector2D(Vector2D&& w)
{
  w.print("moving  ");
  _x=__exchange(w._x, 0.0);
  _y=__exchange(w._y, 0.0);
  count++;

}
Vector2D Vector2D::fromCarthesian(double x, double y)
{
  Vector2D w;
  w._x=x;
  w._y=y;
  return w;
}
const Vector2D Vector2D::fromPolar(double r, double fi)
{
  Vector2D w;
  w._x=r*cos((fi*2*M_PI)/360);
  w._y=r*sin((fi*2*M_PI)/360);
  return w;
}
void Vector2D::print(const char * s) const
{
  cout<<s<<"("<<_x<<", "<<_y<<")"<<endl;
}
int Vector2D::number_vertices()
{
  return count; 
}
double Vector2D::dot(const Vector2D& w1) const
{
  return(_x*w1._x+_y*w1._y);
}
Vector2D Vector2D::add(const Vector2D& w1) const
{
  Vector2D w;
  w._x=_x+w1._x;
  w._y=_y+w1._y;
  return w;
}
Vector2D::~Vector2D()
{
  count--;
}
