#pragma once
#include<iostream>
#include<string.h>
using namespace std;
/*klasa MyString zawiera tekst i jego dlugosc*/
class MyString
{
  public:
    /*przeciazenie operatora * */
    friend MyString operator * (int n, MyString& s);
    /*przeciazenie operatora <<*/
    friend std::ostream& operator << (std::ostream& str, const MyString& ms);
    /*destruktor*/
    ~MyString();
    /* konstruktor tworzacy klase z wyrazem*/
    MyString(const char * text);
    /* konstruktor kopiujacy*/
    MyString(const MyString & s);
    /* konstruktor przenoszacy*/
    MyString(MyString && s);
    /*funkcja zwracajaca tekst z klasy*/
    char * t() const;
    /*przeciazenie operatora +*/
    MyString operator + (MyString &s);
    /*przeciazenie operatora * */
    void operator * (int n);
    /*przeciazenie operatora == */
    bool operator == (MyString s) const;
    /*przeciazenie operatora = */
    void operator=(const MyString s);
  private:
    /*@field _t - tekst*/
    char *_t;
    /*@field _size - dlugosc tekstu*/
    int _size;
};
MyString operator * (int n, MyString& s);
std::ostream& operator << (std::ostream& str, const MyString& ms);