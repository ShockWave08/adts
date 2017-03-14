#include "StackV.h"

/*
	The purpose of this function is to return the number of elements on the stack
	
		This is done by invoking the function size() from the class vector
*/
int Stack::size(){
	return data.size();
}

/*
	The purpose of this function is to add an element at the top of the stack
	
	This is done by invoking the function push_back(int k) from the class vector
*/
void Stack::push(int k){
	data.push_back(k);
}

/*
	The purpose of this function is to delete the first element in the stack
	
	This is done by invoking the function pop_back() from the class vector
*/
void Stack::pop(){
	data.pop_back();
}

/*
	The purpose of this function is to view the function at the top of the stack
	
	This is done by invoking the function data.back() from the class vector
*/
int Stack::top(){
	return data.back();
}

/*
	The purpose of this function is to clear the entire stack and free memory
	
	This is done by invoking the function clear() from the class vector
*/
void Stack::clear(){
	data.clear();
}
