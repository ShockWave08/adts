#include "StackL.h"

/*
	return the size of the stack, by invoking the size() function from class List
*/
int Stack::size(){
	return data.size();
}

/*
	The purpose of this function is to add an element at the top of the stack
	
	This is done by invoking the push_back(int k) function from class List
*/
void Stack::push(int k){
	data.insert(k ,1);
}

/*
	The purpose of this function is to delete the first element in the stack
	
	This is done by, by invoking the pop_back() function from class List
*/
void Stack::pop(){
	data.remove(1);
}

/*
	The purpose of this function is to view the element at the top of the stack
	
	This is done by, invoking the back function getAT(int k) from class List
*/
int Stack::top(){
	return data.getAt(1);
}

/*
	The purpose of this function is to clear the entire stack and free memory
	
	This is done by, invoking the back function clear() from class List
*/
void Stack::clear(){
	data.clear();
}

