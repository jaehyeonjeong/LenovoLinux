#include "vector.h"

void Vector::push_back(string s) {
	if(capacity <= length) {
		string* temp = new string[capacity * 2];
		for(int i = 0; i < length; i++) {
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
		capacity *= 2;
	}

	data[length] = s;
	length++;
}

string Vector::operator[](int i) {return data[i];}

void Vector::remove(int x) {
	for(int i = x; i < length; i++) {
		data[i - 1] = data[i];
	}
	length--;
}

int Vector::size() {return length;}
AS
Vector::~Vector() {
	if(data) {
		delete[] data;
	}
}

