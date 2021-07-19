#pragma once

#include <initializer_list>
#include <iostream>
using namespace std;
class Arr2D{
public:
  static Arr2D adopt(int* data,int x,int y);
  Arr2D()=default;
  Arr2D(int x, int y);
  ~Arr2D();
  int* operator[](int index) const;
  int* operator[](int index);
  friend void operator<<=(const char*string, const Arr2D& data);
private:
  int* _T=nullptr;
  bool _p;
  int _x=0;
  int _y=0;
};