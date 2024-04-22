#include "strmath.hpp"

#include <iostream>
#include <cstdint>

using namespace std;

void trim0s(string &str){
	uint64_t i = 0;
	for(; i < str.size(); ++i) if(str[i] != '0') break;
	if(str.size() == i) --i;
	str = str.substr(i);
}
