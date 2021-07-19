#pragma once
#include<iostream>
using namespace std;
class Prezent
{
  friend class Worek;
  private:
    float _wartosc;
    Prezent *next=nullptr;
    
  public:
    Prezent()=default;
    Prezent(const float w);
    Prezent(Prezent & p);
    void Wypisz() const;
    float Wartosc() const;
    ~Prezent()=default;
};