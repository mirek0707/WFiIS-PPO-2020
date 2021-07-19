#include<iostream>
#include "lab04.h"
using namespace std;
MapPoint *construct (const char * nazwa, float dlugosc, float szerokosc)
{
  MapPoint * m= (MapPoint*)malloc(sizeof(MapPoint));
  m->nazwa=(char*)nazwa;
  m->dlugosc=dlugosc;
  m->szerokosc=szerokosc;
  return m;
}
void print (MapPoint *p)
{
  cout<<"Position of "<<p->nazwa<<". Latitude: "<<p->dlugosc<<". Longitude: "<<p->szerokosc<<endl;
}
MapDist distance (MapPoint *p1, MapPoint p2)
{
  MapDist d;
  d.latitude=p1->dlugosc-p2.dlugosc;
  d.longitude=p1->szerokosc-p2.szerokosc;
  return d;
}
double distanceMag (MapDist d)
{
  return sqrt(pow(d.latitude,2)+pow(d.longitude,2));
}
MapPoint inTheMiddle(MapPoint *p1, MapPoint *p2, const char * nazwa)
{
  MapPoint np;
  np.nazwa=(char*)nazwa;
  np.dlugosc=(p1->dlugosc+p2->dlugosc)/2;
  np.szerokosc=(p1->szerokosc+p2->szerokosc)/2;
  return np; 
}
MapPoint closestFrom(MapPoint *p1, MapPoint *p2,MapPoint *p3)
{
  if (distanceMag( distance(p1,*p3) )>distanceMag( distance(p2,*p3) ) )
  {
    return *p3;
  }
  else
  {
    return *p2;
  }
}
 char * name(MapPoint p)
 {
   return p.nazwa;
 }
void move(MapPoint **krk, const double mD, const double mS)
{
  (*krk)->dlugosc += mD;
  (*krk)->szerokosc += mS;
}
void clear (MapPoint* p)
{
  free (p);
}
void clear (MapPoint** p, int r)
{
  for (int i=0; i<r; i++)
  {
    free(*(p+i));
  }
}