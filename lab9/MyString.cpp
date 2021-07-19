#include "MyString.h"
int MyString::ilosc=0;
MyString::MyString(const char * data)
{
  _text=new char [strlen(data)+1];
  strcpy(_text,data);
  _ID=++ilosc;
}
void MyString::print()const
{
  cout<<"ID: "<<_ID<<"str: "<<_text<<endl;
}
const MyString MyString::create(const char * data)
{
  return MyString(data);
}
void MyString::join(const MyString& s)
{
  char * temp=new char[strlen(_text)+strlen(s._text)+1];
  strcpy(temp,_text);
  strcat(temp,s._text);
  delete [] _text;
  _text=temp;
}
void MyString::replace(const char * data)
{
  delete [] _text;
  _text=new char[strlen(data)+1];
  strcpy(_text,data);

}
char * MyString::sw() const
{
  return _text;
}
void swap (MyString& s1, MyString& s2)
{
  char * temp=s1._text;
  s1._text=s2._text;
  s2._text=temp;
}
MyString::~MyString()
{
  cout<<"- deleting "<<_text<<endl;
  delete [] _text;
}