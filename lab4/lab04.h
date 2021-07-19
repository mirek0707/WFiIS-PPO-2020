#pragma once 
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
struct MapPoint
{
  char* nazwa ;
  float dlugosc;
  float szerokosc;

};
struct MapDist
{
  float latitude;
  float longitude;
};
MapPoint * construct (const char * nazwa, float dlugosc, float szerokosc);
void print (MapPoint *p);
MapDist distance (MapPoint *p1, MapPoint p2);
double distanceMag (MapDist d);
MapPoint inTheMiddle(MapPoint *p1, MapPoint *p2, const char * nazwa);
MapPoint closestFrom(MapPoint *p1, MapPoint *p2,MapPoint *p3);
char * name(MapPoint p);
void move(MapPoint **krk, const double mD, const double mS);
void clear (MapPoint* p);
void clear (MapPoint** p, int r);