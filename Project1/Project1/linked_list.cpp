#include <string>
#include "parce_word_value.h"
#include <iostream>
#include "Linked_list.h"
using namespace std;

void Linked_List::add(string value) {
	node *tmp = new node;
	tmp->data = value;
	tmp->next = tail;
	tail = tmp;
	count++;
		
}
void Linked_List::search(string word) {
	node *elem = tail;
	while (elem) {
		if (parce(elem->data) == word) {
			cout << elem->data << endl;
			return;
		}
		elem = elem->next;
	}
}

int Linked_List::size() {
	return count;
}