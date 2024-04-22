#include "strmath.hpp"

#include <iostream>
#include <cstdint>

using namespace std;

int8_t compare(string a, string b){
	while(a.size() > b.size()) b = string{'0'} + b;
	while(b.size() > a.size()) a = string{'0'} + a;

	for(uint64_t i = 0; i < a.size(); ++i){
		//TODO
	}
}
