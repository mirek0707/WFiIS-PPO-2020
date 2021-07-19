#pragma once
#include<iostream>
using namespace std;
/* klasa MapDistance - klasa przechowujaca roznice dlugosci (_rlon) i szerokosci (_rlat) oraz metody*/
class MapDistance
{
  public:
  /*funkcja set typu void - funkcja ustawiaca roznice szerokosci i dlugosci geograficznych punktow na podstawie argumentow, ktore przyjmuje
    @param lat - roznica szerokosci punktow
    @param lon - roznica dlugosci punktow*/
    void set(const double lat, const double lon);
    /*funkcja print typu void - funkcja wyswietlajaca dany punkt*/
    void print();
  private:
      //@field _rlat - roznica szerokosci
      double _rlat;
      //@field _rlon - roznica dlugosci
      double _rlon;

};