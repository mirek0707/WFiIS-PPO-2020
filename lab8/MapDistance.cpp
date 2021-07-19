#include "MapDistance.h"
void MapDistance::set(const double lat, const double lon)
{
  _rlat=lat;
  _rlon=lon;
}
void MapDistance::print()
{
  cout<<"Distance: ("<<_rlat<<", "<<_rlon<<")"<<endl;
}