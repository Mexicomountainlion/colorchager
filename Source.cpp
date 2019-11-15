#include<iostream>
#include <Windows.h>
using namespace std;
int main() {
	char input = 'o';

	do {
		cout << "What color do you want to see?" << endl;
		cout << "(A), Purple. (B) Blue, (C),Red. (D), Yellow. (E), Green " << endl;
		cin >> input;


		switch (input) {

		case 'A':
			system("color 5F");
			break;

		case 'B':
			system("color 1F");
			break;

		case 'C':
			system("color 4F");
			break;

		case  'D':
			system("color 6F");
			break;

		case 'E':
			system("color 2F");
			break;
		}
	} while (input != 'q');
}