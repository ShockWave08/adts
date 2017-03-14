#include <iostream>
#include "List.h"

using namespace std;

int main()
{

	List L1, L2;

	//Do some stuff with L1, L2, ...
	// ...

	L1.insert(3, 1);
	L1.insert(78, 2);
	L1.insert(34, 3);
	L1.insert(5, 4);
	L1.insert(27, 5);	

	cout << "The new size of the list: " << L1.size() << endl;

	for(int i = 1; i < L1.size() + 1; i++){
		cout << "Get data stored in position " << i << ": " << L1.getAt(i) << endl;
	} 

	L1.remove(1);
	 
	cout << "The new size of the list: " << L1.size() << endl;

	for(int i = 1; i < L1.size() + 1; i++){
		cout << "Get data stored in position " << i << ": " << L1.getAt(i) << endl;
	} 

	L1.remove(2);
	 
	cout << "The new size of the list: " << L1.size() << endl;

	for(int i = 1; i < L1.size() + 1; i++){
		cout << "Get data stored in position " << i << ": " << L1.getAt(i) << endl;
	} 

}
