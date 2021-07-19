#include "MyString.h"
using namespace std;
MyString::MyString(const char * text)
{
  _size =strlen(text);
  _t=new char [_size+1];
  strcpy(_t,text);
}
MyString::MyString(const MyString & s)
{
    _t = new char[strlen(s._t)+1];
    strcpy(_t,s._t);
}
MyString::MyString(MyString && s)
{
    _t = s._t;
    s._t = nullptr;
}
char * MyString::t() const
{
  return (_t);
}
std::ostream& operator << (std::ostream& str, const MyString& ms)
{
  return (str << ms.t());
}
MyString MyString::operator + (MyString &s)
{
  char* temp;
  temp= new char [strlen(s.t())+_size+1];
  strcpy(temp,_t);
  strcat(temp,s.t());
  MyString h(temp);
  delete [] temp;
  return h; 
}
void MyString::operator * (int n)
{
  char* temp;
  temp= new char [n*_size+1];
  strcpy(temp, _t);
  for(int i=1;i<n;i++)
  {
    strcat(temp,_t);
  }
  delete [] _t;
  _t=temp;
}
MyString operator * (int n, MyString& s)
{
  char* temp;
  temp= new char [n*strlen(s.t())+1];
  strcpy(temp, s.t());
  for(int i=1;i<n;i++)
  {
    strcat(temp,s.t());
  }
  MyString h(temp);
  delete [] temp;
  return h; 
}
bool MyString::operator == (MyString s) const
{
  if ((int)strlen(s.t())==_size)
  {
    for (int i=0;i<_size;i++)
    {
      if (s.t()[i]!=_t[i])
      {
        return false;
      }
    }
    return true;
  }
  else 
    return false;
}
void MyString::operator=(const MyString s)
{
    if(!strcmp(_t,s._t))
        return;
    delete []_t;
    _t = new char[strlen(s._t)+1];
    strcpy(_t,s._t);
}
MyString::~MyString()
{
  //if (_t!= nullptr)
    delete [] _t;
  _t=nullptr;
}
