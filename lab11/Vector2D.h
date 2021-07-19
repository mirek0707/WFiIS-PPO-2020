#pragma once
#include<iostream>
#include<cmath>
using namespace std;
/*klasa Vector2D - klasa zawierajaca dwie liczby typu double i metody dzialajace na niej*/
class Vector2D
{
  public:
    /*konstruktor tworzacy klase Vector2D*/
    Vector2D();
    /*konstruktor kopiujacy klase Vector2D
    @param w - wektor (w klasie) do skopiowania*/
    Vector2D(const Vector2D& w);
    /*konstruktor przenoszacy klase Vector2D
    @param w - wektor (w klasie) do przeniesienia*/
    Vector2D( Vector2D&& w);
    /*destruktor klasy Vector2D*/
    ~Vector2D();
    /*funkcja sluzaca do zwracania ilosci wektorow
    @return ilosc wektorow*/
    static int number_vertices();
    /*funkcja fromCarthesian - tworzy wektor ze wspolrzednych kartezjanskich
    @param x - wspolrzedna 1
    @param y - wspolrzedna 2*/
    static Vector2D fromCarthesian(double x, double y);
    /*funkcja fromPolar - tworzy wektor ze wspolrzednych biegunowych
    @param r - promien
    @param fi - kat*/
    static const Vector2D fromPolar(double r, double fi);
    /*funkcja print - wyswietla wektor 
    @param s - ciag znakow do wyswietlenia przed wektorem*/
    void print(const char * s) const;
    /*funkcja dot - oblicza iloczyn skalarny dwoch wektorow 
    @param w1 - jeden z wektorow do obliczenia iloczynu skalarnego*/
    double dot(const Vector2D& w1) const;
    /*funkcja add - oblicza sume dwoch wektorow 
    @param w1 - jeden z wektorow do obliczenia sumy*/
    Vector2D add(const Vector2D& w1) const;
  private:
    //@field _x - pierwsza wspolrzedna wektora
    double _x;
    //@field _y - druga wspolrzedna wektora
    double _y;
    /*licznik wektorow*/
    static int count;
};