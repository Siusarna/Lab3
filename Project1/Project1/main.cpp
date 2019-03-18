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
	Linked_List *arr = new Linked_List[10];
	arr = hash_table("test.txt");
	system("pause");
}