#include "StackLL.h"

/*
	self-referential Node class
	link is a data member which is a pointer to an object of the same type (i.e. Node)
*/
class Stack::Node //
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	};

/*
	destructor implementation
	keep removing elements from the stack as long as the number of elements is greater than zero
*/
Stack::~Stack(){
    while(num_elements > 0)
      pop();
}

/*
	function used to return the number of elements on the stack
*/
int Stack::size(){
	return num_elements;
}

/*
	The purpose of this function is to add a new element at the top of the stack

	create a class Node pointer called newPtr which points to an object of the same type, with a dynamic value stored on heap memory
	make the newPtr link point to the Node frontPtr
	make the frontPtr point to the newPointer Node
	add 1 to num_elements everytime this function is successfully ran
*/
void Stack::push(int val){
	Node* newPtr = new Node{val};

	newPtr->link = frontPtr;
	frontPtr = newPtr;

	num_elements++;
}

/*
	The purpose of this function is to delete the element at the top of the stack
	
	create a class Node pointer called delPtr
	point delPtr to the frontPtr Node
	frontPtr is now the node it was pointing to 
	subtract 1 from num_elements everytime this function is successfully ran
*/
void Stack::pop(){
	Node* delPtr;

	delPtr = frontPtr;
	frontPtr = frontPtr->link;

	delete delPtr;
	num_elements--;
}

/*
	return the data value stored in the frontPtr, which is the data at the top of the stack	
*/
int Stack::top(){
	return frontPtr -> data;
}

/*
	keep removing elements from the stack as long as the stack size is greater than zero 
*/
void Stack::clear(){
	while(size() > 0);
		pop();
}
