#pragma once
#include "Prezent.h"
class Prezent;
class Worek
{
  friend class Prezent;
  private:
    Prezent * _head=nullptr;
  public:
    Worek()=default;
    Worek(const Worek &v);
    ~Worek()=default;
    //Worek(const Worek& v);
    void Wloz(Prezent pr);
    void WypiszZawartosc() const;
    void UsunPrezentNumer(int n);
};
