#include <iostream>
#include "input.h"
#include "Hash_table.h"
#include "Linked_list.h"
#include "hash_function.h"
using namespace std;

void main() {
	cout << "Hello" << endl;
	string line;
	input(line);
	int n = 10;
	Linked_List *arr = new Linked_List[n];
	arr = hash_table("dict_processed.txt",n);
	int key = hash_function(line,n);
	arr[key].search(line);
	delete[] arr;
	system("pause");
}