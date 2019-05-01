#pragma once
#include <string>
#include "Linked_list.h"
#include <string>
using namespace std;

class Hash_table {
private:
	long int n = 10000000;
	Linked_List *arr=new Linked_List[n];
	Linked_List *resize(Linked_List *arr, long int &n);
public:
	//Hash_table(string filename);
	void add(string value, int key);
	void get(string word);
	void longest_line();
};


//Linked_List *hash_table(string path,int &n);