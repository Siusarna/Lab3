#include <string>
#include <iostream>
#include "input.h"

using namespace std;

void input(string &line) {
	cout << "Type a sentence to get definition: ";
	getline(cin, line);
}