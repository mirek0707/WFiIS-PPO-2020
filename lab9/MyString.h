#pragma once
#include<iostream>
#include<cstring>
using namespace std;
/*klasa MyString zawiera slowo i funkcje operujące na nim*/
class MyString
{
  public:
    static int ilosc;
    /*konstruktor - tworzy klase z zadanym slowem
    @param *data - zadane slowo*/
    MyString(const char * data);
    /*destruktor - usuwa klase*/
    ~MyString();
    /*funkcja print wyswietla slowo*/
    void print() const;
    /*funkcja create typu static const MyString tworzy klase z zadanym slowem
    @param *data - slowo
    @return nowopowstala klasa*/
    static const MyString create(const char * data);
    /*funcja join - laczy dwa slowa
    @param s - klasa zawierajaca slowo*/
    void join(const MyString& s);
    /*funcja replace - zamienia slowo w klasie na inne
    @param data - slowo*/
    void replace(const char * data);
    /*funcja sw - zwraca slowo z danej klasy
    @return - slowo*/
    char * sw() const;
    /*funcja swap - zamienia slowa w klasach
    @param s1 - klasa 1
    @param s2 - klasa 2*/
    friend void swap (MyString& s1, MyString& s2);
  private:
    /*field _text - tekst typu char* */
    char* _text;
    /*field _ID - numer kolejnosci slow */
    int _ID;

};

