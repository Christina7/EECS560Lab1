#include <iostream>
#include "list.h"
using namespace std;

int main(){
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
	l.insert(0, l.getHead());
	l.print();
	cout << "4 \n";
	cout << isE;

return 0;
}
