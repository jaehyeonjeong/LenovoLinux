#include "stack.h"

Stack::Stack() : start(Null, "") {current = &start;}

void Stack::push(string s) {
	Node* n = new Node(current, s);
	current = n;
}

string Stack::pop() {
	if (current == &start) return "";

	string s = current->s;
	Node* prev = current;
	current = current->prev;

	// Delete propped node
	delete prev;
	return s;
}

string Stack::peek() {return current->s;}

bool Stack::is_empty() {
	if (current == &start) return true;
	return false;
}

Stack::~Stack() {
	while (current != &start) {
		Node* prev = current;
		current = current->prev;
		delete prev;
	}
}
