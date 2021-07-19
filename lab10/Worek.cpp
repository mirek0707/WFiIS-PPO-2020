#include "Worek.h"
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