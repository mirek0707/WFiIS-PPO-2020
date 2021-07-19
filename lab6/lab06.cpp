#include<iostream>
#include "lab06.h"
#include<cmath>
using namespace std;
void set(Bits *bits, int data[], int r )
{
  bits->r=r;
  int i,j=r-1;
  for(i=31;i>=0;i--)
  {
    if (j>=0)
    {
      bits->T[i]=data[j];
      j--;
    }
    else
    {
      bits->T[i]=0;
    }
  }
}
void print (const Bits *bits)
{
  int i, p=0;
  for (i=0;i<32;i++)
  {
    if (bits->T[i]!=0 && p==0)
    {
      p=1;
      cout<<bits->T[i];
    }
    else if (p==1)
    {
      cout<<bits->T[i];
    }

  }
  cout<<endl;
}
Bits add_up(const Bits *bits1, const Bits *bits2)
{
  Bits bits3;
  int i;
  for (i=31;i>=0;i--)
  {
    bits3.T[i]=bits3.T[i]+bits1->T[i]+bits2->T[i];
    if (bits3.T[i]==2)
    {
      bits3.T[i]=0;
      bits3.T[i-1]=1;
    }
    else if (bits3.T[i]==3)
    {
      bits3.T[i]=1;
      bits3.T[i-1]=1;
    }

  }
  return bits3;
}
void bit_and (Bits *bits, Bits *mask)
{
  int i;
  for (i=31;i>=0;i--)
  {
    bits->T[i]=mask->T[i]&bits->T[i];
  }
}
void bit_xor(Bits *bits, Bits * mask)
{
  
  int i;
  for (i=31;i>=0;i--)
  {
    bits->T[i]=mask->T[i]^bits->T[i];
  }

}
void doOperation (void (*f)(Bits *, Bits *), Bits *bits, Bits *mask)
{
  f(bits, mask);
}
int to_decimal(const Bits *bits)
{
  int s=0;
  for (int i=31;i>=0;i--)
  {
    s+=pow(2,31-i)*bits->T[i];
  }
  return s;
}