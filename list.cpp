#include <iostream>
#include "list.h"
using namespace std;

list::list(){
	head = NULL;
}

void list::insert(double x, node L){

}

bool list::isEmpty(){
	if (head == NULL){
		return true;
	}
	else{
		return false;
	}
}

void list::erase(double x, node L){

}

void list::print(){

}

void list::find(double x, node L){

}
/*
void list::setHead(double num){
	head.data = num;
}

void list::setNext(node* num){
	head->next = num;
}*/