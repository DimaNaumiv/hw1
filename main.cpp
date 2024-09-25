#include <iostream>
#include <ctime>
using std::endl;
using std::cout;
using std::cin;

void culka(int a, int b, char c) {
	int g = a;
	if (c == '+') {
		cout << a << '+' << b << '=' << a + b;
	}
	else if (c == '-') {
		cout << a << '-' << b << '=' << a - b;
	}
	else if (c == '*') {
		if (a != 0 && b != 0) {
			cout << a << '*' << b << '=' << a * b;
		}
		else {
			cout << "error\n";
		}
	}
	else if (c == '/') {
		if (a != 0 && b != 0) {
			cout << a << '/' << b << '=' << a / b;
		}
		else {
			cout << "error\n";
		}
	}
	else if (c == '^') {
		if (b == 0) {
			cout << a << '^' << b << '=' << 1;
		}
		else {
			for (int i = 0; i < b - 1; i++) {
				g = g * a;
			}
			cout << a << '^' << b << '=' << g;
		}
	}
}

int main() {
	/*int a;  task 1
	int b;

	cout << "input first number\n";
	cin >> a;
	cout << "input second number\n";
	cin >> b;

	int* ptr = &a;
	int* ptr1 = &b;

	if (*ptr > *ptr1) {
		cout <<endl<< *ptr<<" is the biggest" << endl;
	}
	else if (*ptr < *ptr1) {
		cout <<endl<< *ptr1 << " is the biggest" << endl;
	}
	else {
		cout <<endl<< *ptr << " = " << *ptr1 << endl;
	}*/

	/*int a;  task 2
	cout << "input first number\n";
	cin >> a;
	int* ptr = &a;
	if (*ptr < 0) {
		cout << "this number has -\n";
	}
	else {
		cout << "this number dont have -\n ";
	}*/
	
	/*int a;  task 3
	int b;

	cout << "input first number\n";
	cin >> a;
	cout << "input second number\n";
	cin >> b;

	int* ptr = &a;
	int* ptr1 = &b;

	cout <<endl<< *ptr << endl << *ptr1 << endl << endl;

	*ptr = *ptr + *ptr1;
	*ptr1 = *ptr - *ptr1;
	*ptr = *ptr - *ptr1;


	cout << *ptr << endl << *ptr1 << endl;*/

	/*int* ptr = new int;  task 4
	int* ptr1 = new int;
	char* ptr2 = new char;

	cout << "input first number\n";
	cin >> *ptr;
	cout << "input second number\n";
	cin >> *ptr1;
	cout << "input :+;-:*;/;^\n";
	cin >> *ptr2;

	culka(*ptr, *ptr1, *ptr2);

	delete ptr;
	ptr = nullptr;
	delete ptr1;
	ptr1 = nullptr;
	delete ptr2;
	ptr2 = nullptr;*/

	/*srand(time(NULL));  task 5
	int* sum = new int{0};

	int* size=new int;
	cout << "input size of array\n";
	cin >> *size;

	int* Arr = new int[*size];

	cout << "\nyour array\n";
	for (int i = 0; i < *size; i++) {
		Arr[i] = rand() % 10;
		*sum = *sum + Arr[i];
		cout << Arr[i] << " ";
	}

	cout <<endl<<endl<<"sum ="<< * sum<<endl;

	delete sum;
	sum = nullptr;

	delete size;
	size = nullptr;

	delete[] Arr;
	Arr = nullptr;*/

	return 0;
}