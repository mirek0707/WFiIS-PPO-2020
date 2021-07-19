#include "funkcje.h"
#include<vector>
using namespace std;
int wczytajLiczbeWyrazow ()
{
  int n;
  cout<<"Podaj n: ";
  cin>>n;
  return n;
}
void wypiszBinarnie (int n)
{
  vector<int>V(0);
  int p;
  while (n>0)
  {
    p=n%2;
    V.insert(V.begin(),p);
    n=n/2;
  }
  int r=V.size();
  for (int i=0;i<r;i++)
  {
    cout<<V[i];
  }
  V.clear();
}
int *inicjalizujCiagFibonacciego(int n)
{
  int w1=0, w2=1, i, pom;
  int *wsk=(int*)calloc(n,sizeof(int));
  wsk[0]=w1;
  if (n>0)
  {
    for (i=1;i<=n;i++)
    {
      pom=w1+w2;
      w1=w2;
      w2=pom;
      wsk[i]=w1;
    }
  }
  return wsk;
  
}
void wypisz(const int* c, int n)
{
  cout<<"(";
  for (int i=0;i<=n;i++)
  {
    if (i<n)
      cout<<*(c+i)<<", ";
    else 
    {
      cout<<*(c+i)<<")";
    }
  }
  cout<<endl;
}
void suma(const int *c, int n0)
{
  int i, s=0;
  for (i=0;i<=n0;i++)
  {
    s+=*(c+i);
  }
  cout<<"suma: "<<s;
  cout<<endl;
}
void iloczyn(const int *c, int n0)
{
  int i, s=1;
  for (i=1;i<=n0;i++)
  {
    s*=*(c+i);
  }
  cout<<"iloczyn: "<<s;
  cout<<endl;
}
void max(const int *c1, int n1, const int *c2, int n2)
{
  int max=0, i;
  if (n1>n2)
  {
    for (i=0;i<=n1;i++)
    {
      if (*(c1+i)>max)
      {
        max=*(c1+i);
      } 
    }
  }
  else
  {
    for (i=0;i<=n2;i++)
    {
      if (*(c2+i)>max)
      {
        max=*(c2+i);
      } 
    }
  }
  cout<<"maksimum: "<<max;
  if (n1>n2)
  {
    cout<<" (ciag0)";
  }
  else if (n1==n2)
  {
    cout<<" (ciag0 i ciag1)";
  }
  else
  {
    cout<<" (ciag1)";
  }
  cout<<endl;
}
void UsunCiag(const int * c)
{
  free ((int*)c);
}
void suma(const int *c1, int n1, const int *c2, int n2)
{
  int i, s=0;
  for (i=0;i<=n1;i++)
  {
    s+=*(c1+i);
  }
  for (i=0;i<=n2;i++)
  {
    s+=*(c2+i);
  }
  cout<<"suma dwoch ciagow: "<<s;
  cout<<endl;
}