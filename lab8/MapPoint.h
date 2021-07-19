#pragma once
#include<iostream>
#include "MapDistance.h"
#include<cmath>
using namespace std;
/* klasa MapPoint - klasa przechowujaca dlugosc (_lon) i szerokosc (_lat) oraz metody
@field _lat - szerokosc
@field _lon - dlugosc*/
class MapPoint
{
  public:
    /*funkcja set_coordinates typu void - funkcja ustawiaca szerokosc i dlugosc geograficzna punktu na podstawie argumentow, ktore przyjmuje
    @param lat - szerokosc punktu
    @param lon - dlugosc punktu*/
    void set_coordinates(const double lat, const double lon);
    /*funkcja print typu void - funkcja wyswietlajaca dany punkt*/
    void print();
    /*funkcja distance typu MapDistance - funkcja obliczajaca roznice pomiedzy dlugosciami i szerokosciami dwoch punktow, zwraca klase zawierajaca te roznice
    @param p1 - punkt
    @return newr - klasa zawierajaca roznice pomiedzy dlugosciami i szerokosciami dwoch punktow*/
    MapDistance distance(const MapPoint &p1);
    /*funkcja half_way_to typu MapPoint - funkcja tworzaca nowy punkt znajdujacy sie pomiedzy dwoma punktami
    @param p1 - punkt
    @return s - klasa zawierajaca punkt znajdujacy sie pomiedzy dwoma punktami*/
    MapPoint half_way_to(const MapPoint &p1);
  private:
      double _lat;
      double _lon;

};