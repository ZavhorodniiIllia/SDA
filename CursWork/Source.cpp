#include "Header.h"

int main() {
	int ch=0;
	while (ch != 11) {
		Menu();
		cout << "Select a menu item:";
		cin >> ch;
		if (ch <= 11 && ch > 0) {
			switch (ch) {
			case 1: {
				cout << "1" << endl;
				break;
			}
			case 2: {
				cout << "2" << endl;
				break;
			}
			case 3: {
				cout << "3" << endl;
				break;
			}
			case 4: {
				cout << "4" << endl;
				break;
			}
			case 5: {
				cout << "5" << endl;
				break;
			}
			case 6: {
				cout << "6" << endl;
				break;
			}
			case 7: {
				cout << "7" << endl;
				break;
			}
			case 8: {
				cout << "8" << endl;
				break;
			}
			case 9: {
				cout << "9" << endl;
				break;
			}
			case 10: {
				cout << "10" << endl;
				break;
			}
			}
		}
		else
			cout << "Invalid value, try again" << endl;
	}
	system("pause");
}