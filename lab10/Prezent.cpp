#include "Prezent.h"

Prezent::Prezent(const float w)
{
  _wartosc=w;
  
}
Prezent::Prezent(Prezent & p)
{
  _wartosc = p.Wartosc();
  next=nullptr;
}
void Prezent::Wypisz() const
{
  cout<<"Prezent o wartosci: "<<_wartosc<<endl;
}
float Prezent::Wartosc() const
{
  return _wartosc;
}

