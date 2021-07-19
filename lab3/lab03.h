#pragma once
#include<cstdlib>
#include<cmath>
int * initFibonacci(int n);
void print(const int *wsk,int n);
void deleteSequence(const int *wsk);
void addSequence(int *numberOfSequences, int *** sequencesList, int **sequencesLenght, int x/**/);
void printSequence(int ** sL,int *nL, int x);
void printAllSequences(int **sL,int *nL,int n);
void swapSequence(int *numberOfSequences, int *** sequencesList, int **sequencesLenght, int x);
void deleteSequences(int *nS, int *** sL, int **nL);