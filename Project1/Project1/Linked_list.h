#pragma once
#include <string>
using namespace std;

struct node {
	string data;
	node *next;
};

class Linked_List {
private:
	int count=0;
public:
	node *tail;
	Linked_List() {
		tail = NULL;
	}
	void add(string value);
	void search(string word);
	int size();
	string head();
};