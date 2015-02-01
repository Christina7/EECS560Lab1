#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <iostream>
using namespace std;

struct node{
	double data;
	node *next;
};


class list{
	private:
		node *head;

	public:
		list();
		void insert(double x, node L);
		bool isEmpty();
		void erase(double x, node L);
		void print();
		void find(double x, node L);
	
		//void setHead(double num);
		//void setNext(node* num);
};


#endif
