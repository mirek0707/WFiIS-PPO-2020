#pragma once
#include<iostream>

using namespace std;
/*struktura MyString przechowuje podane słowo
@field str - slowo*/
struct MyString
{
  char *str;
};
extern MyString mstr; 
/*funkcja init dodaje slowo do struktury
@param slowo - slowo
@param s- struktura*/
void init(MyString &s, const char* slowo);
/*funkcja join łączy slowa z dwoch struktur
@param r1 - struktura1
@param r2- struktura2
@return struktura posiadajaca zlaczone slowa*/
MyString join(const MyString &r1, const MyString &r2);
/*funkcja swap zamienia struktury ze soba
@param s1 - struktura1
@param s2- struktura2*/
void swap(MyString &s1, MyString &s2);
/*funkcja swap zamienia struktury ze soba
@param s1 - struktura1
@param s2- struktura2*/
void swap(MyString *&s1, MyString *&s2);
/*funkcja del czyści pamiec
@param s1 - struktura1
@param s2- struktura2
@param s3- struktura2
@param s4- struktura2
@param s5- struktura2*/
void del(MyString &s1, MyString &s2=mstr, MyString &s3=mstr, MyString &s4=mstr, MyString &s5=mstr);
/*funkcja pomdel pomaga w czyszczeniu pamieci
@param s - struktura*/
void pomdel(MyString &s);
