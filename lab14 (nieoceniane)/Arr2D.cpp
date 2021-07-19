#include"Arr2D.h"
Arr2D::Arr2D(int x, int y){
  _p=true;
  _x=x;
  _y=y;
  _T=new int[x*y];
  for(int i=0; i<x*y; i++)
    _T[i]=0;
}
Arr2D Arr2D::adopt(int *T1, int x, int y)
{
	Arr2D w;
	w._T=T1;
	w._p=false;
	w._x=x;
	w._y=y;

	return w;
}
int * Arr2D::operator[](int i)
{
	return &_T[i*_x];
}
int * Arr2D::operator[](int i) const
{
	return &_T[i*_x];
}

void operator<<=(const char*string, const Arr2D& data){
  std::cout<<string<<std::endl;
  for(int y=0; y<data._y; y++){
    std::cout<<data[y][0];
    for(int x=1; x<data._x; x++)
      std::cout<<" "<< data[y][x];
    std::cout<<std::endl;
  }
  std::cout<<string<<std::endl;
}
Arr2D::~Arr2D(){
  if(_p and _T !=nullptr){
    delete [] _T;
    _x=0;
    _y=0;
  }
}