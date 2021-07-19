#pragma once
#include<iostream>
/*struktura Bits przechowuje liczbe zapisana w systemie dwojkowym
@field T to tablica z liczba
@field r to ilosc bitow*/
struct Bits
{
  int T[32]={};
  int r;
};
/*funkcja set sluzy do umieszczenia liczby w strukturze
@param bits to wskaznik na strukture
@param r to ilosc bitow w liczbie
@param data[] to liczba*/
void set(Bits *bits, int data[], int r );
/*funkcja print wyswietlaliczbe
@param bits to wskaznik na strukture*/
void print (const Bits *bits);
/*funkcja print wyswietla liczbe
@param bits to wskaznik na strukture*/
Bits add_up(const Bits *bits1, const Bits *bits2);
/*funkcja bit add wykonuje bitowa koniunkcje
@param bits1 to wskaznik na strukture 1
@param bits2 to wskaznik na strukture 2*/
void bit_and (Bits *bits, Bits *mask);
/*funkcja bit xor wykonuje bitowy xor
@param bits1 to wskaznik na strukture 1
@param bits2 to wskaznik na strukture 2*/
void bit_xor(Bits *bits1, Bits * mask);
/*funkcja doOperation wykonuje wskazana operacje
@param void *f to operacja do wykonania
@param bits1 to wskaznik na strukture 1
@param bits2 to wskaznik na strukture 2*/
void doOperation (void (*f)(Bits *, Bits *), Bits *bits, Bits *mask);
/*funkcja to_Decimal przeksztalca liczbe na system dziesietny
@param bits to wskaznik na strukture */
int to_decimal(const Bits *bits);