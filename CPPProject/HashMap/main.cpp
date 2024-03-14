#include <iostream>
#include "HashMap.h"

using namespace std;

int main() {
	HashMap<string, int>* hashmap = new HashMap<string, int>();

	hashmap->put("abc", 213);
	hashmap->put("bcd", 1234345);

	cout << hashmap->get("abc") << endl;
	cout << hashmap->get("bcd") << endl;

	hashmap->put("abc", 41234);
	hashmap->put("bcd", 123123123);

	cout << hashmap->get("abc") << endl;
	cout << hashmap->get("bcd") << endl;

	cout << endl;

	hashmap->remove("abc");
	cout << hashmap->get("abc") << endl; // 키를 찾을 수 없음

	cout << endl;
	hashmap->put("abcd", 1234);
	hashmap->put("abce", 123);
	hashmap->put("abcf", 3456);
	hashmap->put("abcq", 123456);

	cout << hashmap->get("abcc") << endl; // 키를 찾을 수 없음
	cout << hashmap->get("abcd") << endl;

	return 0;
}

