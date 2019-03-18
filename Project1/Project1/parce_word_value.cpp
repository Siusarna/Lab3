#include <string>
#include "parce_word_value.h"
using namespace std;

string parce(string value) {
	int i = 0;
	string result="";
	while (value[i] != ';') {
		result += value[i];
		i++;
	}
	return result;
}