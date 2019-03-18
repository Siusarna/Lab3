#include <string>
#include <iostream>
#include "hash_function.h"
using namespace std;

int hash_function(string word,int count_ele) {
	int ascii;
	string result="";
	for (int i = 0; i < word.length(); i++) {
		char x = word.at(i);
		ascii = (int)x;
		result += to_string(ascii);
	}
	return (stoi(result) % count_ele);
}