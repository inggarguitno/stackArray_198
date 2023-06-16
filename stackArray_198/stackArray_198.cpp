#include <iostream>
#include <string>

using namespace std;
class Stack {
private:
	int stack_array[5];
	int top;

public:
	Stack() {
		top = -1;
	}

	int push(int alement) {
		if (top == 4) {
			return 0;
			cout << "number of data exceeds the limit" << endl;
			return 0;
		}
		top++;
		stack_array[top] = alement;
		cout << endl;
		cout << alement << "ditambahkan(pushed)" << endl;

		return alement;
	}

	void pop() {
		if (empty)