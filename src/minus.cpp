#include "strmath.hpp"

#include <iostream>
#include <cstdint>

using namespace std;

string operator -(string a, string b){
	while(a.size() > b.size()) b = string{'0'} + b;
	while(b.size() > a.size()) a = string{'0'} + a;

	uint64_t i1;
	int carry = 0;
	for(uint64_t i = 0; i < a.size(); ++i){
		i1 = a.size()-i-1;

		int8_t result = (a[i1] - '0' - (b[i1] - '0') + carry + 10) % 10 + '0';
		cout << "a1: " << (int16_t) (a[i1] - '0') << endl;
		cout << "b1: " << (int16_t) (b[i1] - '0') << endl;
		cout << "result: " << (int16_t) (result - '0') << endl;
		carry = -((a[i1] - '0' - (b[i1] - '0') + carry) < 0);

		a[i1] = result;
	}

	trim0s(a);
	return a;
}
