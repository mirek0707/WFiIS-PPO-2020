#include<iostream>
#include<string.h>
#include "MyString.h"
MyString mstr; 
using namespace std;
void init(MyString &s, const char* slowo)
{
  s.str=new char[strlen(slowo)+1];
  strcpy(s.str,slowo);
}
MyString join(const MyString &r1, const MyString &r2)
{
  int n=strlen(r1.str)+strlen(r2.str)+1;
  MyString s1;
  s1.str=new char[n];
  strcpy(s1.str,r1.str);
  strcat(s1.str,r2.str);
  return s1;
}
void swap(MyString &s1, MyString &s2)
{
  MyString temp;
  temp=s1;
  s1=s2;
  s2=temp;
}
void swap(MyString *&s1, MyString *&s2)
{
  MyString* temp;
  temp=s1;
  s1=s2;
  s2=temp;
}
void del(MyString &s1, MyString &s2, MyString &s3, MyString &s4, MyString &s5)
{
  pomdel(s1);
  pomdel(s2);
  pomdel(s3);
  pomdel(s4);
  pomdel(s5);

}
void pomdel(MyString &s)
{
  if(&s!=&mstr && s.str!=NULL)
  {
    cout<<"deleting "<<s.str<<endl;
    delete[] s.str;
    s.str=NULL;
  }
}