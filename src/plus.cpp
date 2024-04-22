#include "strmath.hpp"

#include <iostream>
#include <cstdint>

using namespace std;

string operator &(string a, string b){
	while(a.size() > b.size()) b = string{'0'} + b;
	while(b.size() > a.size()) a = string{'0'} + a;

	a = string{'0'} + a;
	b = string{'0'} + b;

	int carry = 0;
	uint64_t i1;
	for(uint64_t i = 0; i < a.size(); ++i){
		i1 = a.size()-i-1;

		int8_t result = (a[i1] - '0' + b[i1] - '0' + carry) % 10 + '0';
		carry = (a[i1] - '0' + b[i1] - '0' + carry)/10;

		a[i1] = result;
	}

	trim0s(a);
	return a;
}
