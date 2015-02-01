#include <iostream>
#include "list.h"
using namespace std;

list::list(){
	head = NULL;
}

void list::insert(double x, node *L){
	if (L == NULL){
		L = new node;
		L->data = x;
		L->next = NULL;
	}
	else{
		if (L->data == x){

		}
		else{
			if (L->next == NULL){
				L->next = new node;
				L->next->next = NULL;
				L->next->data = x;
			}
			else{
				insert(x, L->next);
			}
		}
	}
}

bool list::isEmpty(){
	if (head == NULL){
		return true;
	}
	else{
		return false;
	}
}

void list::erase(double x, node *L){

}

void list::print(){
	node *temp = head;
	while (temp->next != NULL){
		cout << temp->data;
		temp = temp->next;
	}

	/*
	if (L->next == NULL){
		cout << L->data << " \n";
	}
	else{
		cout << L->data << " ";
	}*/
}

node* list::find(double x, node *L){
	if (L->next == NULL){
		if (L->data == x){
			return L;
		}
		else
		{
			return nullptr;
		}
	}
	else{
		if (L->data == x){
			return L;
		}
		else
		{
			find(x, L->next);
		}
	}
}

void list::build(ifstream& file){
	double item;
	while (file >> item){
		insert(item, head);
	}
}
/*
void list::setNext(node* num){
	head->next = num;
}*/