#include <string>
#include "hash_function.h"
#include "Linked_list.h"
#include "parce_word_value.h"
#include "Hash_table.h"
#include <fstream>

Linked_List *Hash_table::resize(Linked_List *arr, long int &n) {
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
			index = hash_function(key);
			arr1[index] = arr[i];
		}

	}
	return arr1;
}

void Hash_table::add(string value, int key) {
	int count = 0;
	if (arr[key].size() == 0) count++;
	arr[key].add(value);
	if (count >= (n*0.8)) {
		arr = resize(arr, n);
	}
}

void Hash_table::get(string word) {
	int key = hash_function(word);
	arr[key].search(word); 
}

void Hash_table::longest_line() {
	int current_length = 0;
	int max_length = 0;
	Linked_List *a;
	for (int i = 0; i < n; i++) {
		a = &arr[i];
		node *elem = a->tail;
		while (elem)
		{
			current_length++;
			elem = elem->next;
		}
		if (current_length > max_length) max_length = current_length;
		current_length = 0;
	}
	cout << "Max Lenght= " << max_length << endl;
}


/*void hash_table() {
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
}*/