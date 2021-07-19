#include "Worek.h"
Worek::Worek(const Worek &v)
{
  Prezent * p1 = 0;
  Prezent * p2 = 0;

  if( v._head == 0 )
  {
    _head = 0;
  }
  else
  {
    _head = new Prezent();
    _head -> _wartosc = v._head -> _wartosc;

    p1 = _head;
    p2 = v._head -> next;
  }
  while( p2 )
  {
    p1 -> next = new Prezent();
    p1 = p1 -> next;
    p1 -> _wartosc = p2 -> _wartosc;

    p2 = p2 -> next;
  }
  p1 -> next = 0;
}
void Worek::Wloz(Prezent pr)
{
  
  if (_head==nullptr)
  {
    _head=&pr;
  }
  else
  {
    Prezent* temp=_head;
    while(temp->next)
    {
      temp=temp->next;
    }
    temp->next=&pr;
  }
}
void Worek::WypiszZawartosc() const
{
  cout<<"=== Zawartosc worka ==="<<endl;
  Prezent* temp=_head;
  int i=1;
  while(temp)
  {
    cout<<i<<". Prezent o wartosci: "<<temp->Wartosc()<<endl;
    temp=temp->next;
    i++;
  }
}
void Worek::UsunPrezentNumer(int n)
{
  Prezent *temp = _head;
  if (n==1) 
  {
    _head=_head->next;
  }
    else 
    {
      for (int i=2;i!=n;i++) 
      {
        temp = temp->next;
      }
      temp->next = temp->next->next;
    }
}
