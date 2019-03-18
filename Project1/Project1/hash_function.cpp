#include <string>
#include <iostream>
#include "hash_function.h"
using namespace std;

int hash_function(string word,int count_ele) {
	int ascii=0;
	for (unsigned int i = 0; i < word.length(); i++) {
		char x = word.at(i);
		ascii += (int)x;
	}
	return ascii%count_ele;
}