// CPP-DSA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "node.cpp"

using namespace std;

int main()
{
	int* numC = new int(1);

	string * pointer = new string("algo dentro");

	Node<int*> nodoCambiante(numC);

	Node<string*> nodostring(pointer);
	
	(*numC)++;

	cout << (*nodostring.getValue()) << "\n";

	//delete pointer;

	*pointer = *new string("otra cosa");

	cout << *nodostring.getValue() << "\n" << *pointer << "\n";

	
	cout << (*numC) << " cambiante: " << (*nodoCambiante.getValue()) << "\n";

	system("pause");
	
	return 0;
}