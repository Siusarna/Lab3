#include <string>
#include <iostream>
#include "hash_function.h"
using namespace std;

int hash_function(string word) {
	int ascii=0;
	int size = word.length();
	for (unsigned int i = 0; i < size; i++) {
		char x = word.at(i);
		ascii += word[i] * (31 ^ (size - i));
	}
	return ascii;
}