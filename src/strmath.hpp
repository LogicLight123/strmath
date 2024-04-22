#ifndef STRMATH_HPP
#define STRMATH_HPP

#include <iostream>

using std::string;

string operator &(string a, string b); //addition
string operator -(string a, string b); //subtraction
string operator *(string a, string b); //multiplication
string operator /(string a, string b); //division
string operator %(string a, string b); //modulo

bool operator >(string a, string b); //greater than
bool operator <(string a, string b); //less than
bool operator ||(string a, string b); //equal

int8_t compare(string a, string b); //-1, 0, or 1

void trim0s(string &str);


#endif
