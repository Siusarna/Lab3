#include <string>
#include "hash_function.h"
#include "Linked_list.h"
#include "parce_word_value.h"
#include <fstream>

Linked_List *resize(Linked_List *arr, int &n) {
	int arr_size = n;
	n *= 2;
	Linked_List *arr1 = new Linked_List[n];
	string temp;
	string key;
	int index;
	for (int i = 0; i < arr_size; i++) {
		if (arr[i].size() > 0) {
			temp = arr[i].head();
			key = parce(temp);
			index = hash_function(key, n);
			arr1[index] = arr[i];
		}

	}
	return arr1;
}


Linked_List *hash_table(string path,int &n) {
	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "File isnt open" << endl;
		system("pause");
	}
	else {
		cout << "File open" << endl;
		cout << "Create hash-table" << endl;
		string str;
		string key;
		int index;
		int count = 0;
		Linked_List *arr = new Linked_List[n];
		while (!fin.eof()) {
			getline(fin, str);
			key = parce(str);
			index = hash_function(key, n);
			if (arr[index].size() == 0) count++;
			arr[index].add(str);
			if (count >= (n*0.8)) {
				arr = resize(arr, n);
			}

		}
		
		return arr;
	}
}