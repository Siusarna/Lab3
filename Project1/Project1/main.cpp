#include <iostream>
#include <string>
#include <fstream>
#include "input.h"
#include "Hash_table.h"
#include "Linked_list.h"
#include "hash_function.h"
#include "Wild_Nixon_Functions.h"
#include "parce_word_value.h"
using namespace std;

void main() {
	cout << "Hello" << endl;
	Hash_table task;
	ifstream fin;
	fin.open("dict_processed.txt");
	string str;
	string key;
	int index;
	while (!fin.eof()) {
		getline(fin, str);
		key = parce(str);
		index = hash_function(key);
		task.add(str, index);
	}
	/*do {
		string line;
 		input(line);
		work_with_string(line,task);
	} while (ask_for_repeat());*/
	task.longest_line();
	system("pause");
}