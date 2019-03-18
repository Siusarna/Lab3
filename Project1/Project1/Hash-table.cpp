#include <string>
#include "hash_function.h"
#include "Linked_list.h"
#include "parce_word_value.h"
#include <fstream>

Linked_List *hash_table(string path) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "File isnt open" << endl;
		exit(1);
	}
	else {
		cout << "File open" << endl;
		string str;
		string key;
		int index;
		Linked_List *arr = new Linked_List[10];
		while (!fin.eof()) {
			getline(fin, str);
			key = parce(str);
			index = hash_function(key, 10);
			arr[index].add(str);
		}
		return arr;
	}
}