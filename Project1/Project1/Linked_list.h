#pragma once
#include <string>
using namespace std;

struct node {
	string data;
	node *next;
};

class Linked_List {
private:
	node *tail;
public:
	Linked_List() {
		tail = NULL;
	}
	void add(string value);
	void search(string word);

};