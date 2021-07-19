#include "MapPoint.h"

void MapPoint::set_coordinates(const double lat, const double lon)
{
  _lat=lat;
  _lon=lon;
}
void MapPoint::print()
{
  cout<<"Point: ("<<_lat<<", "<<_lon<<")"<<endl;
}
MapDistance MapPoint::distance(const MapPoint &p1)
{
  MapDistance newr;
  newr.set((p1._lat-_lat),(p1._lon-_lon));
  return newr;
}
MapPoint MapPoint::half_way_to(const MapPoint &p1)
{
  MapPoint s;
  s.set_coordinates((p1._lat+_lat)/2, (p1._lon+_lon)/2);
  return s;
}