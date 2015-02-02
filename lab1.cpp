#include <iostream>
#include "list.h"
using namespace std;

int main(){

	list l;
	ifstream fileName;
	fileName.open("data.txt");
	l.build(fileName);

	int input;
	double x;

	while (1){
		cout << "Please choose one of the following commands: \n 1 - insert \n 2 - delete \n 3 - print \n 4 - exit \n";
		cin >> input;

		switch (input) {
		case 1:
			cin >> x;
			l.insert(x, l.getHead());
			break;
		case 2:
			cin >> x;
			l.erase(x, l.getHead());
			break;
		case 3:
			l.print();
			break;
		case 4:
			fileName.close();
			exit(0);
			break;
		default:
			cout << "Option not available try again \n";

		}
	}

	/*
	cout << "1 \n";
	list l;
	ifstream fileName;
	fileName.open("data.txt");
	cout << "2 \n";

	l.build(fileName);
	cout << "3 \n";
	
	l.print();

	bool isE = l.isEmpty();
	
	l.insert(42, l.getHead());
	l.print();
	l.erase(0, l.getHead());
	l.print();
	cout << "4 \n";
	cout << isE;
	fileName.close();
return 0;

*/
}
