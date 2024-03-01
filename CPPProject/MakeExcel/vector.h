class Vector{
	string* data;
	int capacity;
	int length;

public:
	// 생성자
	Vector(int n = 1);

	// 맨 뒤에 새로운 원소를 추가한다.
	void push_back(string s);

	// 임의의 위치의 원소에 접근한다.
	string operator[](int i);

	// x 번째 위치한 원소를 제거한다.
	void remove(int x);

	// 현재 백터의 크기를 구한다.
	int size();

	~Vector();
}
