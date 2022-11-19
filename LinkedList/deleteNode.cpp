#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

int main() {
	Node* head;
	Node* first = NULL;
	Node* second = NULL;
	Node* thrid = NULL;
	Node* forth = NULL;

	first = new Node();
	second = new Node();
	thrid = new Node();
	forth = new Node();

	first->data = 1;
	second->data = 2;
	thrid->data = 3;
	forth->data = 4;

	first->next = second;
	second->next = thrid;
	thrid->next = forth;
	forth->next = NULL;


	

	return 0;
}