#include "lab03.h"
#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;
int * initFibonacci(int n)
{
  int n1=0, n2=1, pom;
  int * wsk=NULL;
  wsk=(int *)malloc(sizeof(int));
  for (int i=0;i<=n;i++)
  {
    wsk=(int *)realloc(wsk, (i+1)*sizeof(int));
    *(wsk+i)=n1;
    pom=n1+n2;
    n1=n2;
    n2=pom;
  }
  return wsk;
}
void print(const int *wsk,const int n)
{
  int i;
  cout<<"(";
  for(i=0;i<n;i++)
  {
    cout<<*(wsk+i)<<", ";
  }
  cout<<*(wsk+n)<<")"<<endl;
}
void deleteSequence(const int *wsk)
{
  free((int*)wsk);
}
void addSequence(int *numberOfSequences, int *** sequencesList, int **sequencesLenght, int x)
{
  (*numberOfSequences)++;
  *sequencesList=(int**)realloc(*sequencesList, *numberOfSequences*sizeof(int*));
  *(*sequencesList+*numberOfSequences-1)=initFibonacci(abs(x));
  *sequencesLenght=(int*)realloc(*sequencesLenght, *numberOfSequences*sizeof(int));
  *(*sequencesLenght+*numberOfSequences-1)=abs(x);
}
void printSequence(int ** sL,int *nL, int x)
{
  int i;
  cout<<"Ciag nr "<<x<<": (";
  for (i=0;i<*(nL+x);i++)
  {
    cout<<sL[x][i]<<", ";
  }
  cout<<sL[x][i]<<")"<<endl;
  
}
void printAllSequences(int **sL,int *nL,int n)
{
  int i, j;
  for (i=0;i<n;i++)
  {
    cout<<"Ciag nr "<<i<<": (";
    for (j=0;j<*(nL+i);j++)
    {
      cout<<sL[i][j]<<", ";
    }
    cout<<sL[i][j]<<")"<<endl;
  }
}
void swapSequence(int *numberOfSequences, int *** sequencesList, int **sequencesLenght, int x)
{
  int n=*(*sequencesLenght+x);
  for(int i=0;i<n/2;i++)
  {
    swap((*sequencesList)[x][i], (*sequencesList)[x][n-i]);
  }
}
void deleteSequences(int *nS, int *** sL, int **nL)
{
  for (int i=0;i<*nS;i++)
  {
    free (*(*sL+i));
  }
  free(*sL);
  free(*nL);
}
