#include <iostream>
#include <string>
#include "input.h"
#include "Hash_table.h"
#include "Linked_list.h"
#include "hash_function.h"
#include "Wild_Nixon_Functions.h"
using namespace std;

void main() {
	cout << "Hello" << endl;
	int n = 10;
	Linked_List *arr = new Linked_List[n];
	arr = hash_table("dict_processed.txt",n);
	string line;
	input(line);
	work_with_string(line, arr, n);



	/*int key = hash_function(line,n);
	arr[key].search(line);
	*/
	delete[] arr;
	system("pause");
}