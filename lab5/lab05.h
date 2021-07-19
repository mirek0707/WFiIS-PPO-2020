#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
/*Struktura node jest lista jednokierunkowa zawiera:
@field data typu char * (jest to tekst)
@field next typu node* - wskaznik na strukture*/
struct node
{
  char * data;
  node * next;
};
/*Struktura List zawiera:
@field head typu node * - wskaznik na poczatek listy jednokierunkowej
*/
struct List
{
  node * head;
};
/*funkcja prepare - funkcja "tworzaca" poczatek listy, ustawia head na NULL
@param test typu List* - wskaznik na strukture zawierajaca poczatek listy*/
void prepare (List *);
/*funkcja add - funkcja dodajaca elementy listy jednokierunkowej
@param test typu List * - wskaznik na strukture zawierajaca poczatek listy
@param buffer typu char * - dane tekstowe, ktore dodajemy do listy*/
void add (List * , const char * );
/*funkcja empty typu bool - funkcja sprawdzajaca, czy lista jest pusta
@param p typu const List * - wskaznik na strukture zawierajaca poczatek listy
@return 1 gdy lista jest pusta lub 0 gdy ma jakis element*/
bool empty (const List * );
/*funkcja dump - funkcja wyswietlajaca elementy listy
@param p typu const List * - wskaznik na strukture zawierajaca poczatek listy*/
void dump (const List *);
/*funkcja clear - funkcja usuwajaca elementy listy i sama  liste
@param p typu const List * - wskaznik na strukture zawierajaca poczatek listy*/
void clear (List *);
