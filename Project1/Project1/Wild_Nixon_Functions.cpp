#include <iostream>
#include <string>
#include "Wild_Nixon_Functions.h"
#include "hash_function.h"
#include "Linked_list.h"
using namespace std;

void work_with_string(string &str, Linked_List *arr, int n) {
	string cword;
	int hash;
	str += " ";
	while (!str.empty()) {
		cword = str.substr(0, (str.find_first_of(" ")));
		upper_case(cword);
		hash = hash_function(cword, n);
		cout << cword << endl;
		(arr[hash]).search(cword);
		str = str.substr(str.find_first_of(" ") + 1);
	}
}

void upper_case(string &str) {
	char help;
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 'a') && (str[i] <= 'z')) {
			help = str[i];
			help = 65 + (help - 97);
			cout << help;
			str[i] = help;
			cout << str[i];
		}
	}
}

bool ask_for_repeat() {
	char what;
	cout << "Do You want to repeat the input?(Y/N) ?\b";
	cin >> what;
	if ((what == 'Y') || (what == 'y')) return true;
	else return false;
}